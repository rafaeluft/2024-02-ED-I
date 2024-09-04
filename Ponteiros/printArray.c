#include <stdio.h>
void print_int(void *x){
    int *pint = (int*)x;
    printf("%d", *pint);
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
    print_array(V, sizeof(int), 5, print_int);
    return 0;
}