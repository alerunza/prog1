#include <stdio.h>

int sumArray(int arLen, int ar[]);
int sumArrayRic(int arLen, int ar[], int index);

int main(void){
    int a[3] = {1, 2, 3};

    printf("%d ", sumArray(3, a));
}

int sumArray(int arLen, int ar[]){
    return sumArrayRic(arLen,ar,0);
}

int sumArrayRic(int arLen, int ar[], int index){
    int ret;
    if(index == arLen){
        ret = 0;
    } else {
        ret = ar[index] + sumArrayRic(arLen,ar,index+1);
    }
    return ret;
}