#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node{
    int value;
    Node * next;
};

typedef struct{
    Node * first;
    Node * last;
}Queue;

Node * newNode(int val, Node * n){
    Node * newnode = malloc(sizeof(Node));
    newnode->value = val;
    newnode->next = n;
}


void enqueue(int val, Queue * q){
    Node * newnode = newNode(val, NULL);
    q->last->next = newnode;
    q->last = q->last->next;
}

void dequeue(Queue * q){
    Node * temp = q->first;
    q->first = q->first->next;
    free(temp);
}

int main(){

    Queue q;
    q.first = newNode(10, NULL);
    q.last = q.first;
    printf("Before: Front = %d, Rear = %d\n", q.first->value, q.last->value);
    enqueue(20, &q);
    printf("After: Front = %d, Rear = %d\n", q.first->value, q.last->value); 
    dequeue(&q);
    printf("After: Front = %d, Rear = %d\n", q.first->value, q.last->value);

    return 0;

}