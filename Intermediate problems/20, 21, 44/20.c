#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node{
    int value;
    struct Node * next;
};

void addHead(int x, Node ** list){
    Node * newNode = malloc(sizeof(Node));
    newNode->value = x;
    newNode->next = *list;
    *list = newNode;
}

void printList(Node * n){
    while(n) {printf("%d -> ", n->value); n = n->next;}
    printf("NULL\n");
}

int search(Node * n, int x){
    while(n) {if(n->value == x) return 1; n = n->next;}
    return 0;
}

int midElement(Node * n){
    Node * x = n;
    while(n && n->next){
        n = n->next->next;
        x = x->next;
    }
    return x->value;
}

int main(){

    Node * linkedlist = NULL;
    for(int i=10;i>0;i--){
        addHead(i*10, &linkedlist);
    }

    printList(linkedlist);
    printf("Middle Element: %d\n", midElement(linkedlist));

    addHead(20, &linkedlist);
    
    printList(linkedlist);
    printf("Middle Element: %d\n", midElement(linkedlist));

    printf("Search Result for 10: ");
    if(search(linkedlist,10)) printf("Found\n");
    else printf("Not Found\n");

    printf("Search Result for 15: ");
    if(search(linkedlist,15)) printf("Found\n");
    else printf("Not Found\n");

    addHead(15, &linkedlist);
    printList(linkedlist);

    printf("Search Result for 15: ");
    if(search(linkedlist,15)) printf("Found\n");
    else printf("Not Found\n");

    printf("Middle Element: %d\n", midElement(linkedlist));

    return 0;

}