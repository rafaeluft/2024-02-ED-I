#ifndef TCIRC_LIST_H
#define TCIRC_LIST_H
#include <stdbool.h>

typedef struct tcirc_list TCircList;

TCircList* TCircList_create();
/**
 * Insere um elemento inteiro no inicio lista circular
 */
bool TCircList_insert_begin(TCircList*, int);
/**
 * Insere um elemento inteiro no final da lista circular.
 */
bool TCircList_insert_end(TCircList*, int);
/**
 * Imprime a lista circular
 */
void TCircList_print(TCircList*);
#endif