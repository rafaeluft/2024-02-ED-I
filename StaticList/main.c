#include "TStaticList.h"

int main(){
    TStaticList *list = SList_create();
    SList_insert_end(list, 4);
    SList_insert_end(list, 3);
    SList_insert_end(list, 1);
    SList_insert_end(list, 0);
    SList_print(list);
    return 0;
}