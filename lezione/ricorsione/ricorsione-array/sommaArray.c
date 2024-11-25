#include <stdio.h>

#define len 10

int sumArray(int arLen, int ar[]);
//int sumArrayRic(int arLen, int ar[], int index);
int sumArrayRic2(int arLen, int ar[], int left, int right);

int contaPariArray(int arLen, int ar[]);
int contaPariArrayRic(int arLen, int ar[], int left, int right);

int main(void){
    int a[len];
    for (int i = 0; i < len; i++){
        a[i] = i;
    }

    //printf("%d ", sumArray(len, a));
    printf("%d ", contaPariArray(len, a));
}

int sumArray(int arLen, int ar[]){
    //return sumArrayRic(arLen, ar, 0);
    return sumArrayRic2(arLen, ar, 0, arLen);
}

/* int sumArrayRic(int arLen, int ar[], int index){
    int ret;
    if(index == arLen){
        ret = 0;
    } else {
        ret = ar[index] + sumArrayRic(arLen,ar,index+1);
    }
    return ret;
} */

// dicotomica left to right 
// & right to left -> [left, right) -> [left, middle) and [middle, right) 
// middle = (left + right) / 2
int sumArrayRic2(int arLen, int ar[], int left, int right){
    if ((left + 1) == right){
        printf("DEBUG: Caso base l == r-1: %d\n", ar[left]);
        return ar[left];
    } else{
        int middle = (left + right) / 2;
        printf("DEBUG: Chiamata Ric. left: %d, right: %d, middle: %d\n", left, right, middle);
        return sumArrayRic2(arLen, ar, left, middle) + sumArrayRic2(arLen, ar, middle, right);
    }
}

int contaPariArray(int arLen, int ar[]){
    return contaPariArrayRic(arLen, ar, 0, arLen);
}

int contaPariArrayRic(int arLen, int ar[], int left, int right){
    if(left != right){
        if((left + 1) == right){
            if(ar[left] % 2 != 0){
                return 0;
            } else{
                return 1;
            }
        } else{
            int middle = (left + right) / 2;

            printf("DEBUG: Chiamata Ric. left: %d, right: %d, middle: %d\n", left, right, middle);
            return contaPariArrayRic(arLen, ar, left, middle) + contaPariArrayRic(arLen, ar, middle, right);
        }
    } else{
        // array vuoto
        return 0;
    }
}