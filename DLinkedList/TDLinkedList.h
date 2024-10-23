#ifndef TDLINKED_LIST
#define TDLINKED_LIST
#include <stdbool.h>

typedef struct _list TDLinkedList;

TDLinkedList* TDLinkedList_create();

bool TDLinkedList_insert_end(TDLinkedList*, int info);

bool TDLinkedList_insert_begin(TDLinkedList*, int info);

void TDLinkedList_print(TDLinkedList*);
/**
 * Imprime a lista do fim para o inicio
 * @param TDLinkedList* instância da lista
 */
void TDLinkedList_reverse_print(TDLinkedList*);

#endif