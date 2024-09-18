#ifndef PONTO_H
#define PONTO_H

typedef struct _ponto Ponto;

Ponto* Ponto_create(float, float);
void Ponto_destroy(Ponto*);
void Ponto_print(Ponto*);
void Ponto_get_x(Ponto*, float*);
void Ponto_get_y(Ponto*, float*);
void Ponto_set_x(Ponto*, float);
void Ponto_set_y(Ponto*, float);
float Ponto_dist(Ponto*, Ponto*);

#endif