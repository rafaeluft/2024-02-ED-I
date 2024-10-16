#include<stdio.h>
#include<stdlib.h>


int main(){
    int *x = malloc(sizeof(int));
    printf("Antes de atribuir: *x: %d\n", *x);
    *x = 50;
    printf("Depois de atribuir: *x: %d\n", *x);
    int *px;
    int simpleX = 20;
    px = x;
    *px = 10;
    printf("Depois de atribuir px: *x: %d\n", *x);
    return 0;
}