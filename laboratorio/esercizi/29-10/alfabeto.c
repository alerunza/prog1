#include <stdio.h>

#define N 26

int main(void){

    char alfabeto[N+1];

    for(int i = 0; i < N; i++){
        alfabeto[i] = 'A' + i;
        printf("%c ", alfabeto[i]);
    }

    alfabeto[N+1] = '\0';
}
