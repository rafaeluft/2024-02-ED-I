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