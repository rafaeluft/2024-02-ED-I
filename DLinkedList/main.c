#include "TDLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s 1 2 3 4\n", argv[0]);
        return 0;
    }
    TDLinkedList *list = TDLinkedList_create();
    for(int i = 1; i < argc; i++)
        if(!TDLinkedList_insert_end(list, atoi(argv[i])))
            printf("Problema ao inserir o valor: %s\n", argv[i]);
    TDLinkedList_print(list);
    TDLinkedList_reverse_print(list);
    return 0;
}