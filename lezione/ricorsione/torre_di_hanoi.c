#include <stdio.h>

void hanoi(int nDischi, char start, char end, char temp);

int main(void){
    int nDischi = 3;
    char start = 'S', end = 'E', temp = 'T';

    hanoi(nDischi, start, end, temp);
}

void hanoi(int nDischi, char start, char end, char temp){

    if(nDischi == 1){
        printf("%c -> %c\n", start, end);
    }else{
        hanoi(nDischi - 1, start, temp, end);
        printf("%c -> %c\n", start, end);
        hanoi(nDischi - 1, temp, end, start);

    }
}