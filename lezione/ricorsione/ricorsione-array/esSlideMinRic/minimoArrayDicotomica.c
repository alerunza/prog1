//esercizio slide ricorsione array 2
#include <stdio.h>

#define len 10

int minArray(int arLen, int ar[]);
int minArrayRic(int arLen, int ar[], int left, int right);

int main(void){
    //int a[len];

    int a[len] = {56, 3, 1, 89, -5, 7, -1, 5, 4, 10};
    /* for (int i = 0; i < len; i++){
        a[i] = i;
    } */

    for (int i = 0; i < len; i++){
        printf("%d ", a[i]);
    }

    printf("\nMIN: %d ", minArray(len, a));
}

int minArray(int arLen, int ar[]){
    if(arLen > 0){
        return minArrayRic(arLen, ar, 0, arLen);
    } else{
        return 0;
    }
}

// dicotomica left to right 
// & right to left -> [left, right) -> [left, middle) and [middle, right) 
// middle = (left + right) / 2
int minArrayRic(int arLen, int ar[], int left, int right){
    if((left + 1) == right){
        return ar[left];
    } else{
        int middle = (left + right) / 2;

        // printf("DEBUG: Chiamata Ric. left: %d, right: %d, middle: %d\n", left, right, middle);
        if(minArrayRic(arLen, ar, left, middle) < minArrayRic(arLen, ar, middle, right)){
            return minArrayRic(arLen, ar, left, middle);
        } else{
            return minArrayRic(arLen, ar, middle, right);
        }
    }
}