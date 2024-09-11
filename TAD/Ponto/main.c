#include "Ponto.h"
#include <stdio.h>
int main(){
    Ponto *umPonto = Ponto_create(2.4566, 6.877654);
    //A prox linha nao funciona, se descomentar.
    //printf("%f",umPonto->x);
    Ponto_print(umPonto);
    //Exemplo de get:
    float local_x;
    Ponto_get_x(umPonto, &local_x);
    //Exemplo de set
    Ponto_set_x(umPonto, 1.8);
    //Espera-se aqui que se eu imprimir o umPonto,
    //A coordenada x valera 1.8;
    Ponto* py = Ponto_create(2.0, 8.0);
    printf("Distancia: %f\n", Ponto_dist(umPonto, py));
    return 0;
}