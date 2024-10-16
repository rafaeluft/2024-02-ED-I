#include "TCircList.h"
#include <stdlib.h>
#include <stdio.h>
typedef struct _no{
    int info; 
    struct _no* prox;
}TNo;

struct tcirc_list{
    TNo* inicio;
};
TNo* TNo_createNFill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo != NULL){
        novo->info = info;
        novo->prox = NULL;
    }
    return novo;
}

TCircList* TCircList_create(){
    TCircList* list = malloc(sizeof(TCircList));
    if(list != NULL)
        list->inicio = NULL;
    return list;
}
/**
 * Insere um elemento inteiro na lista circular
 */
bool TCircList_insert_begin(TCircList* list, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo == NULL) return false;

    if(list->inicio == NULL){
        //estamos lidando com uma lista vazia..
        novo->prox = novo;
        list->inicio = novo;
    }else{
        //Oh no, oh no, oh nononono
        //3) Percorrer a lista, e achar o último elemento.
        TNo* aux = list->inicio;
        while(aux->prox != list->inicio)
            aux = aux->prox;
        //4) Último elemento passa a apontar para o novo nó; 
        aux->prox = novo;
        //5) Próximo de novo deve apontar para o início;
        novo->prox = list->inicio;
        //6) Início passa a apontar para o novo nó;
        list->inicio = novo;
    }
    return true;
}
/**
 * Insere um elemento inteiro na lista circular
 */
bool TCircList_insert_end(TCircList* list, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo == NULL) return false;

    if(list->inicio == NULL){
        //estamos lidando com uma lista vazia..
        novo->prox = novo;
        list->inicio = novo;
    }else{
        //Oh no, oh no, oh nononono
        //3) Percorrer a lista, e achar o último elemento.
        TNo* aux = list->inicio;
        while(aux->prox != list->inicio)
            aux = aux->prox;
        //4) Último elemento passa a apontar para o novo nó; 
        aux->prox = novo;
        //5) Próximo de novo deve apontar para o início;
        novo->prox = list->inicio;
    }
    return true;
}
/**
 * Imprime a lista circular
 */
void TCircList_print(TCircList* list){
    if(list->inicio==NULL)
        return;
    TNo* aux = list->inicio;
    do{
        printf("%d, ", aux->info);
        aux = aux->prox;
    }while(aux!= list->inicio);
}
