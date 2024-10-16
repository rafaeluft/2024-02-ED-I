#ifndef TLINKED_LIST
#define TLINKED_LIST
#include <stdbool.h>

typedef struct _list TLinkedList;
TLinkedList* TLinkedList_create();
bool TLinkedList_insert_begin(TLinkedList*, int);
bool TLinkedList_insert_end(TLinkedList*, int);
void TLinkedList_print(TLinkedList*);

#endif