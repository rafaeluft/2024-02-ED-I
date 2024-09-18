#ifndef TSTATIC_LIST_H
#define TSTATIC_LIST_H
#include <stdbool.h>

typedef struct _list TStaticList;
/**
 * Cria instâncias de uma lista estática
 * @return TStaticList*
 */
TStaticList* SList_create();
/**
 * Faz a inserção de um elemento no início da lista.
 * @param TStaticList* list
 * @param int valor inteiro a ser inserido na lista
 */
bool SList_insert_begin(TStaticList*, int);
/**
 * Imprime a lista estática
 * @param TStaticList* list
 */
void SList_print(TStaticList*);

#endif