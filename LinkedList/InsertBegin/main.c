#include "TLinkedList.h"
#include <stdio.h>

int main(){
    TLinkedList* list = TLinkedList_create();
    int V[] = {1, 2, 3};
    for(int i=0; i<3; i++)
        if(!TLinkedList_insert_begin(list, V[i]))
            printf("Erro ao inserir %d\n", V[i]);
    TLinkedList_print(list);
    return 0;
}
