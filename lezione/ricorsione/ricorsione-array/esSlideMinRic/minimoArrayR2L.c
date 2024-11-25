//esercizio slide ricorsione array 2
#include <stdio.h>

#define len 10

int minArray(int arLen, int ar[]);
int minArrayRic(int arLen, int ar[], int right);

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
        return minArrayRic(arLen, ar, arLen - 1);
    }
    return 0;
}

int minArrayRic(int arLen, int ar[], int right){
    if(right == 0){
        return ar[right];
    } else{
        if(ar[right] < minArrayRic(arLen, ar, right - 1)){
            return ar[right];
        } else{
            return minArrayRic(arLen, ar, right - 1);
        }
    }
}