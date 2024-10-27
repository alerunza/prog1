// fig07_03.c
// Calcolo del cubo di una variabile usando il passaggio per riferimento.
#include <stdio.h>

void cubeByReference(int *nPtr); // prototipo di funzione

int main(void) {
    int number = 5; // inizializza number
    printf("The original value of number is %d", number);
    cubeByReference(&number); // passa l'indirizzo di number a cubeByReference
    printf("\nThe new value of number is %d\n", number);
    return 0;
}
// eleva al cubo *nPtr; di fatto modifica number in main
void cubeByReference(int *nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr; // calcola il cubo di *nPtr
}