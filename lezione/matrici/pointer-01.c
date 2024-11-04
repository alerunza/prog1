#include <stdio.h>

#define A_LEN 3

int main(void){
    int a[A_LEN] = {17, 9, 80};
    int* pA = a;

    /* int i = 0;

    while(i < A_LEN){
        printf("a[%d] = %d\n", i, a[i]);
        i++;
        pA++;
    } */

    for (int i = 0; i < A_LEN; i++, pA++){
        printf("a[%d] = %d\n", i , *pA);
    }
}