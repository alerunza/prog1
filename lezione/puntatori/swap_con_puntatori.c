#include <stdio.h>

void swap (int* pA, int* pB);

int main(void) {
    int a = 5, b = 2;
    printf("Prima: %d %d\n",a,b);
    swap (&a,&b);
    printf("Dopo: %d %d\n",a,b);
}

void swap (int* pA, int* pB) {
    int temp = *pA;
    *pA = *pB;
    *pB = temp;
    printf("Swap: %d %d\n",*pA,*pB);
}