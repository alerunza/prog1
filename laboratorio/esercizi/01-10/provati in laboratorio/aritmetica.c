//CAST= conversione di tipo

#include <stdio.h>

int main(void){

    int x = 5, y = 2;
    float z = x / y;
    float zCast = (float)x / (float)y;

    printf("int: %d %d\n", x, y);
    printf("float no cast: %f\n", z);
    printf("float cast: %f\n", zCast);

    return 0;
}
