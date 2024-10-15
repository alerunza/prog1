#include <stdio.h>

int main(void){

    int k, n = 0, m = 1;

    scanf("%d", &k);

    for (int i = 0; i < k - 1 && k >= 2; i++){
        printf("%d\n", m);
        int temp = n;
        n = m;
        m = temp + m;
    }
}