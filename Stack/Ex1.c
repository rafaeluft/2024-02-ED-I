#include "Stack.h"
#include <stdio.h>
#include <string.h>

void print_stack(Stack* stack){
    int item;
    while(Stack_pop(stack, &item))
        printf("%c", item);
    putchar(' ');
}
int main(){
    //Ler a string
    char string[1024];
    fgets(string, 1024, stdin);
    Stack *stack = Stack_create();
    for(int i = 0; i <strlen(string); i++){
        if(string[i] == '\n')
            break;
        if(string[i] == ' ' || string[i] == '.')
            print_stack(stack);
        else
            Stack_push(stack, string[i]);
    }
    if(!Stack_is_empty(stack))
        print_stack(stack);
    return 0;
}
