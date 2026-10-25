#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int items[5];
    int top;
}Stack;


int push(Stack * stack, int val){
    stack->items[++(stack->top)] = val;
}

int main(){
    Stack stack = {{50}, 0};
    printf("Before Push: top index = %d, value = %d\n", stack.top, stack.items[stack.top]);
    push(&stack, 100);
    printf("After Push: top index = %d, value = %d\n", stack.top, stack.items[stack.top]);
    return 0;
}