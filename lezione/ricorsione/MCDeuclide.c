#include <stdio.h>

int MCD(int m, int n);

int main(void){
    int mm = 36;
    int nn = 24;

    printf("MCD(%d, %d): %d\n", mm, nn, MCD(mm, nn));
}

/* int MCD(int m, int n){
    if(n == 0){
        return m;
    } else{
        return MCD(n, m-n);
    }
} */

int MCD(int m, int n){
    if(n == 0){
        return m;
    } else{
        return MCD(n, m%n);
    }
}