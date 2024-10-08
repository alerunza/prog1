//leggere un intero e stamparne il quadrato

#include <stdio.h>

int main(void){

    int input;
    int output;

    //input
    scanf("%d", &input);
    printf("input: %d\n", input);

    //operazione quadrato
    output = input * input;

    //output
    printf("output: %d\n", output);
}
