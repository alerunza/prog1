#include <stdio.h>

int main() {
    int x = 5, y = 2, z = 0;
    int* pX = &x;
    int* pY = &y;
    int* pZ = &z;
    *pZ = *pX + *pY; //== *&x + *&y
    printf("L'espressione *pX + *pY vale %d \n", z);
}