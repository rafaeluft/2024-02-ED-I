#include "Ponto.h"
#include <stdlib.h>
#include <stdio.h>

struct _ponto{
    float x, y;
};

Ponto* Ponto_create(float x, float y) {
    Ponto* novo = (Ponto*) malloc(sizeof(Ponto));
    if(novo!=NULL){
        novo->x = x;
        novo->y = y;
    }
    return novo;
}

void Ponto_print(Ponto* ponto){
    if(ponto!=NULL)
        printf("(%.2f,%.2f)\n", ponto->x, ponto->y);
}
