#include <stdio.h>
void print_int(void *x){
    int *pint = (int*)x;
    printf("%d", *pint);
}
void print_float(void *x){
    float *p = (float*)x;
    printf("%f", *p);
}
void print_string(void *x){
    char *p = (char*)x;
    printf("%s", p);
}
void print_array(void *V, unsigned int size, unsigned int n, void (*print)(void*)){
    for(int i=0; i<n; i++){
        print(V+i*size);
        putchar(',');
    }
    putchar('\n');
}
int main(){
    int V[] = {0, 1, 2, 3, 4};
    float F[] = {4.2, 2.3, 3.1, 4.0};
    char strings[][32] = {"Estrutura", "de dados ", " I ", "eh ", "trivial"};
    print_array(V, sizeof(int), 5, print_int);
    print_array(F, sizeof(float), 4, print_float);
    print_array(strings, 32, 5, print_string);
    return 0;
}