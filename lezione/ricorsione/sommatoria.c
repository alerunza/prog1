#include <stdio.h>

int sommaN(int);

int main(void){
    int inp = 5;

    printf("sommaN(%d): %d\n", inp, sommaN(inp));
}

int sommaN(int input){
    int ret = 0;
    
    if (input == 1){
        ret = 1;
    } else{
        ret = input + sommaN(input - 1);
    }

    return ret;
}