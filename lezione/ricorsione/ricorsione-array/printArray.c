#include <stdio.h>

void printArray(int arLen, int ar[]);
void printArrayRic(int arLen, int ar[], int index);

int main(void){

    //int l = 3;
    int arr[3] = {1, 2, 3};

    printArrayRic(3, arr, 0);
    //printArray(3, arr);
}

void printArray(int arLen, int ar[]){
    //wrapper, guscio, involucro
    printArrayRic(arLen,ar,0);
}

/* void printArrayRic(int arLen, int ar[], int index){
    if(index == arLen) {}
    else
    {
        printf("%d ", ar[index]);
        printArrayRic(arLen, ar, index + 1);
    }
} */

void printArrayRic(int arLen, int ar[], int index){
    if(index != arLen) {
        printf("%d ", ar[index]);
        printArrayRic(arLen, ar, index + 1);
    }
} 