#include <stdio.h>

void printArray(int arLen, int ar[]);
void printArrayRic(int arLen, int ar[], int index);
void printArrayRic2(int arLen, int ar[], int right);

int main(void){

    //int l = 3;
    int arr[3] = {1, 2, 3};

    //printArrayRic(3, arr, 0);
    printArrayRic2(3, arr, 3);
    //printArray(3, arr);
}

void printArray(int arLen, int ar[]){
    //wrapper, guscio, involucro
    if(arLen > 0){
        //printArrayRic(arLen,ar,0);
        printArrayRic(arLen,ar,arLen);
    }
}

/* void printArrayRic(int arLen, int ar[], int index){
    if(index == arLen) {}
    else
    {
        printf("%d ", ar[index]);
        printArrayRic(arLen, ar, index + 1);
    }
} */

/* void printArrayRic(int arLen, int ar[], int index){
    if(index != arLen) {
        printf("%d ", ar[index]);
        printArrayRic(arLen, ar, index + 1);
    }
} */

void printArrayRic(int arLen, int ar[], int index){
    if(index == arLen - 1){
        printf("%d ", ar[index]);
    }
    else{
        printArrayRic(arLen, ar, index + 1);
        printf("%d ", ar[index]);
    }
}

// right to left
void printArrayRic2(int arLen, int ar[], int right){
    if(right == 0){

    } else{
        printArrayRic2(arLen, ar, right - 1);
        printf("%d ", ar[right - 1]);
    }
}