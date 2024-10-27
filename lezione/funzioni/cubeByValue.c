// fig07_02.c
// Calcolo del cubo di una variabile usando il passaggio per valore.
#include <stdio.h>

int cubeByValue(int n); // prototipo

int main(void) {
    int number = 5; // inizializza number
    printf("The original value of number is %d", number);
    number = cubeByValue(number); //passa number per valore a cubeByValue
    printf("\nThe new value of number is %d\n", number);
}

// calcola e restituisci il cubo di un argomento intero
int cubeByValue(int n) {
    return n * n * n; // restituisci il cubo di n
}