#include "TLinkedList.h"
#include <stdio.h>

int main(){
    TLinkedList* list = TLinkedList_create();
    int V[] = {7, 5, 1};
    for(int i=0; i<3; i++)
        if(!TLinkedList_insert_end(list, V[i]))
            printf("Erro ao inserir %d\n", V[i]);
    TLinkedList_print(list);
    TLinkedList_insert_begin(list, -1);
    TLinkedList_print(list);
    return 0;
}
