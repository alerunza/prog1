#include <stdio.h>

void leggiInput (int* pA,int* pB);

int main(void) {
    int a = 0, b = 0;
    leggiInput(&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
}

void leggiInput (int* pA,int* pB) {
    printf("Inserisci due interi: ");
    scanf("%d %d", pA, pB);
} 