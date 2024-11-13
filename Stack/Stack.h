#ifndef STACK_H
#define STACK_H
#include <stdbool.h>
typedef struct _stack Stack;

Stack* Stack_create();

bool Stack_push(Stack* stack, int);
bool Stack_pop(Stack* stack, int*);

bool Stack_is_full(Stack* stack);
bool Stack_is_empty(Stack* stack);

#endif