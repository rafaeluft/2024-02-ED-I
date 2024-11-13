#include "Stack.h"
#include <stdlib.h>
#define MAX 10
struct _stack{
    unsigned int qty;
    int data[MAX];
};

Stack* Stack_create(){
    Stack *stack  = malloc(sizeof(Stack));
    if(stack)
        stack->qty = 0;
    return stack;
}

bool Stack_push(Stack* stack, int new_data){
    if(stack==NULL || Stack_is_full(stack))
        return false;
    stack->data[stack->qty++] = new_data;
    return true;
}
bool Stack_pop(Stack* stack, int* retrieved_data){
    if(stack==NULL || Stack_is_empty(stack))
        return false;
    *retrieved_data = stack->data[stack->qty - 1];
    stack->qty--;
    return true;
}
bool Stack_is_full(Stack* stack){
    return stack->qty == MAX;
}
bool Stack_is_empty(Stack* stack){
    return stack->qty == 0;
}