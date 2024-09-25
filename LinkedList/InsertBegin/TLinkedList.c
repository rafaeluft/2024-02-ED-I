#include "TLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _no{
    int info;
    struct _no *prox;
}TNo;

struct _list{
    TNo* inicio;
};
TNo* TNo_createNFill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo){
        novo->info = info;
        novo->prox = NULL;
    }
    return novo;
}


TLinkedList* TLinkedList_create(){
    TLinkedList* list = malloc(sizeof(TLinkedList));
    if(list != NULL)
        list->inicio = NULL;
    return list;
}
bool TLinkedList_insert_begin(TLinkedList* list, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo == NULL) return false;
    if(list->inicio != NULL)
        novo->prox = list->inicio;
    list->inicio = novo;
    return true;
}
void TLinkedList_print(TLinkedList* list){
    TNo* aux = list->inicio;
    while(aux != NULL){
        printf("%d, ", aux->info);
        aux = aux->prox;
    }
    putchar('\n');
}

bool TLinkedList_insert_end(TLinkedList* list, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo == NULL) return false;
    if(list->inicio == NULL)
        list->inicio = novo;
    else{
        TNo* aux = list->inicio;
        while(aux->prox != NULL)
            aux = aux->prox;
        aux->prox = novo;
    }
    return true;

}