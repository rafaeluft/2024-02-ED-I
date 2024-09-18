#include "TStaticList.h"
#include "Contato.h"
int main(){
    TStaticList *list = SList_create(3);
    SList_insert_end(list, Contato_ui_novo());
    SList_insert_end(list, Contato_ui_novo());
    SList_print(list);
    return 0;
}