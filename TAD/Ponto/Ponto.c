#include "Ponto.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
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

void Ponto_destroy(Ponto* ponto){
    free(ponto);
}

void Ponto_get_x(Ponto* ponto, float* px){
    *px = ponto->x;
}
void Ponto_get_y(Ponto* ponto, float* py){
    *py = ponto->y;
}

void Ponto_set_x(Ponto* ponto, float x){
    if(ponto != NULL)
        ponto->x = x;
}
void Ponto_set_y(Ponto* ponto, float y){
    if(ponto != NULL)
        ponto->y = y;
}
float Ponto_dist(Ponto* a, Ponto* b){
    float dx = a->x - b->x;
    float dy = a->y - b->y;
    return sqrtf(dx*dx + dy*dy); 
}