#include <stdio.h>

#define SIZE_A 5

int main(void) {
    int voti[SIZE_A];

    for (int i = 0; i < SIZE_A; i++) {
        voti[i] = i + 18;
    }
    for (int i = 0; i < SIZE_A; i++) {
        printf("%d\t%d\n", i, voti[i]); // tabulazione + newline
    }
}