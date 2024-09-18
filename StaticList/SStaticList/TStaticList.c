#include "TStaticList.h"
#include <stdio.h>
#include <stdlib.h>
struct _list{
    unsigned int MAX;
    unsigned int qty;
    int *data;
};

TStaticList* SList_create(unsigned int size) {
    TStaticList* list = malloc(sizeof(TStaticList));
    if(list!=NULL){
        list->data = malloc(sizeof(int)*size);
        if(list->data==NULL){
            free(list);
            return NULL;
        }
        list->qty = 0;
        list->MAX = size;
    }
    return list;
}
bool SList_insert(TStaticList* list, int info){
    if(SList_is_full(list))
        return false;
    //todo: Implementar a inserção de maneira ordenada crescente
    return true;

}


bool SList_is_full(TStaticList* list){
    return list->qty == list->MAX;
}


void SList_print(TStaticList* list){
    for(unsigned int i=0; i<list->qty; i++)
        printf("%d, ", list->data[i]);
    putchar('\n');
}
