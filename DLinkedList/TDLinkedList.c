#include "TDLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _no{
    int info;
    struct _no* prox, *ant;
}TNo;

struct _list{
    TNo *inicio, *fim;
};
TNo* TNo_createNFill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo != NULL){
        novo->info = info;
        novo->ant = NULL;
        novo->prox = NULL;
    } return novo;
}

TDLinkedList* TDLinkedList_create(){
    TDLinkedList* nova = malloc(sizeof(TDLinkedList));
    if(nova!=NULL){
        nova->inicio = NULL;
        nova->fim = NULL;
    }return nova;
}

bool TDLinkedList_insert_end(TDLinkedList* lista, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo == NULL) return false;
    if(lista->inicio == NULL){
        //Eh o primeiro
        lista->inicio = novo;
        lista->fim = novo;
    }else{
        lista->fim->prox = novo;
        novo->ant = lista->fim;
        lista->fim = novo;
    }
    return true;
}

bool TDLinkedList_insert_begin(TDLinkedList*, int info);

void TDLinkedList_print(TDLinkedList* list){
    puts("Print do inicio ao fim: ");
    TNo* aux = list->inicio;
    while(aux!=NULL){
        printf("<- %d -> ", aux->info);
        aux = aux->prox;
    }putchar('\n');
}
/**
 * Imprime a lista do fim para o inicio
 * @param TDLinkedList* instância da lista
 */
void TDLinkedList_reverse_print(TDLinkedList* list){
        puts("Print do fim ao inicio: ");
    TNo* aux = list->fim;
    while(aux!=NULL){
        printf("<- %d -> ", aux->info);
        aux = aux->ant;
    }putchar('\n');

}
