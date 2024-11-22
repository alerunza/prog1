#include <stdio.h>

int fattRic(int n){
    int ret = 0;

    if(n == 0){
        ret = 1;
    } else{
        ret = n * fattRic(n - 1);
    }

    return ret;
}

int main(void){
    int t = 10;
    int res = fattRic(t);
    printf("%d!: %d\n",t,res);
}