#include <stdio.h>

/* • Chiedi due numeri, e poi stampali*/

int main(){
    int num1, num2;

    printf("Inserisci il primo num intero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo num intero: ");
    scanf("%d", &num2);

    printf("Numeri inseriti: %d e %d\n", num1, num2);

    /* • Stampa la somma di due numeri*/
    int sum = 0;
    sum = num1 + num2;
    printf("Somma dei numeri inseriti: %d\n", sum);
    return 0;
}