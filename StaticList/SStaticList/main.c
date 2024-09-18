#include "TStaticList.h"

int main(){
    TStaticList *list = SList_create(10);
    SList_insert(list, 4);
    SList_insert(list, 3);
    SList_insert(list, 1);
    SList_insert(list, 0);
    SList_insert(list, 7);
    SList_insert(list, 8);
    SList_print(list);
    return 0;
}