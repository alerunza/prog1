#include <stdio.h>

int main(void){

    int n1, n2;

    //input dei due num interi
    printf("Inserisci due numeri interi: ");
    scanf("%d %d", &n1, &n2);

    //printf("%d %d\n", n1, n2);

    //somma
    int n12 = n1 + n2;
    printf("Somma: %d\n", n12);

    //prodotto di n1 e n2
    printf("Prodotto di %d e %d: %d\n", n1, n2, n1 * n2);

    //divisione intera di n1 e n2
    printf("Divisione intera di %d e %d: %d\n", n1, n2, n1 / n2);

    //divisione reale di n1 e n2
    printf("Divisione reale di %d e %d: %f\n", n1, n2, (float)n1 / (float)n2);

    return 0;
}
