#include <stdio.h>

int main(void) {
    int v1 = 5;
    int v2 = 8;
    int v3 = 10;
    int v4 = 15;
    
    puts("Prima: ");
    printf("v1: %d, v2: %d\n", v1, v2);
    printf("v3: %d, v4: %d\n", v3, v4);

    // v1 = v2
    // v2 = v3
    // v3 = v4
    // v4 = v1

    int temp = v1;
    v1 = v2;
    v2 = v3;
    v3 = v4;
    v4 = temp;

    puts("Dopo: ");

    printf("v1: %d, v2: %d\n", v1, v2);
    printf("v3: %d, v4: %d\n", v3, v4);
}