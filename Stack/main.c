#include "Stack.h"
#include <stdio.h>
int main(){
    int V[] = {1,2,3,4,5,6,7,8, 9, 10, 11}, i, temp;
    Stack *piula = Stack_create();
    //Operações de inserção
    for(i=0;i<11;i++)
        if(!Stack_push(piula, V[i]))
            printf("Stack overflow em V[%d]=%d\n",i, V[i]);
    //Operações de remoção
    while(Stack_pop(piula, &temp))
        printf("Dado removido: %d\n",temp);
    return 0;
}