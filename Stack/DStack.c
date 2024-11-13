#include "Stack.h"
#include <stdlib.h>

typedef struct _no {
    int info;
    struct _no *prox;
}TNo;

struct _stack{
    TNo* inicio;
    unsigned int qty;
};

Stack* Stack_create(){
    Stack* stack = malloc(sizeof(Stack));
    if(stack!=NULL){
        stack->inicio = NULL;
        stack->qty = 0;
    }
    return stack;
}

bool Stack_push(Stack* stack, int new_data){
    TNo* novo = malloc(sizeof(TNo));
    if(novo == NULL || stack == NULL) 
        return false;
    novo->info = new_data;
    novo->prox = stack->inicio;
    stack->inicio = novo;
    stack->qty++;
    return true;
}
bool Stack_pop(Stack* stack, int* retrieved_data){
    if(stack == NULL || Stack_is_empty(stack))
        return false;
    *retrieved_data =  stack->inicio->info;
    TNo* to_be_deleted = stack->inicio;
    stack->inicio = stack->inicio->prox;
    free(to_be_deleted);
    stack->qty--;
    return true;
}

bool Stack_is_full(Stack* stack){
    return false;
}
bool Stack_is_empty(Stack* stack){
    //Ou stack->qty == 0
    return stack->inicio == NULL;
}
