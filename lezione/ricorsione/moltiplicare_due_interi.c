#include <stdio.h>

int multR(int m, int n);

int main(void){
    int mm = 4;
    int nn = 5;

    printf("multR(%d, %d): %d\n", mm, nn, multR(mm, nn));
}

int multR(int m, int n){
    int ret;

    if(n == 0){
        ret = 0;
    } else{
        ret = m + multR(m, n - 1);
    }

    return ret;
}