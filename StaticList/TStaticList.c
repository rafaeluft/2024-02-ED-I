#include "TStaticList.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct _list{
    unsigned int qty;
    int data[MAX];
};

TStaticList* SList_create(){
    TStaticList* list = malloc(sizeof(TStaticList));
    if(list!=NULL)
        list->qty = 0;
    return list;
}

bool SList_insert_end(TStaticList* list, int info){
    //Checar se tem espaço
    if(SList_is_full(list))
        return false;
    list->data[list->qty++] = info;
    return true;
}

bool SList_is_full(TStaticList* list){
    return list->qty == MAX;
}


void SList_print(TStaticList* list){
    for(unsigned int i=0; i<list->qty; i++)
        printf("%d, ", list->data[i]);
    putchar('\n');
}
