#include "TLinkedList.h"
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    TLinkedList* list = TLinkedList_create();
    while(n>10){
        TLinkedList_insert_end(list, n);
        int sum = 0;
        int copy_n = n;
        while(copy_n > 0){
            int unidade = copy_n%10;
            sum += unidade*unidade;
            copy_n/=10;
        }
        n = sum;
    }
    TLinkedList_insert_end(list, n);
    TLinkedList_print(list);
    puts((n==1)?"bacana": "non-bacana");
    return 0;
}
