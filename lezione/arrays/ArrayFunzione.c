#include <stdio.h>

#define SIZE_A 3

void square (int a[], int lenA);

int main(void) {
    int a[] = {2,-5,0};

    printf("Prima: \n");
    for (int i = 0; i < SIZE_A; i++){
        printf("%d\t%d\n", i, a[i]);
    }

    square (a, SIZE_A);
    
    printf("Dopo: \n");
    for (int i = 0; i < SIZE_A; i++){
        printf("%d\t%d\n", i, a[i]);
    }
}
void square (int a[], int lenA) {
    for (int i = 0; i < lenA; i++) {
        a[i] = a[i] * a[i];
    }
}