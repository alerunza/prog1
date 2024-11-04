#include <stdio.h>

#define A_LEN 3

int main(void){
    int a[A_LEN] = {17, 9, 80};
    //int* pA = a;

    /* int i = 0;

    while(i < A_LEN){
        printf("a[%d] = %d\n", i, a[i]);
        i++;
        pA++;
    } */

    /* for (int i = 0; i < A_LEN; i++, pA++){
        printf("a[%d] = %d\n", i , *pA);
    } */

   // da fixare dato che salta lo 0
/*     int* pLast = a + (A_LEN - 1);
    for (int i = A_LEN - 1; i > 0; i--, pLast--){
        printf("a[%d] vale %d\n", i , *pLast);
    } */
}