#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a, b;
    printf("Inserisci due numeri: ");
    scanf("%d%d", &a, &b);

    // a) dati i due interi a e b, stampa 1 se il primo intero
    //    è multiplo del secondo, 0 altrimenti;

    bool multiplo = (a % b == 0);

    printf("%d\n", multiplo);

    // b) dato l'intero a (un voto), stampa "true" se a
    //    è compreso fra 1 e 30 (inclusi), "false" altrimenti;

    bool voto = (a >= 1 && a <= 30);
    printf("%s\n", voto ? "true" : "false");

    bool b1 = a > 10;
    bool b2 = b <= 5;

    // c) dati i due booleani b1 e b2, stampa a video il booleano
    //    "false" se b1 e b2 sono entrambi veri, "true" altrimenti;

    printf("%s\n", (b1 && b2) ? "false" : "true");

    // d) dati i due interi a e b, stampa a video il massimo; se sono
    //    uguali stampa a video "I due valori sono uguali".

    if(a > b){
        printf("%d\n", a);
    } else if(a < b){
        printf("%d\n", b);
    } else{
        printf("I due valori sono uguali\n");
    }

    int c = 20;
    // e) dati tre interi a, b e c, stampa a video il massimo
    //    (si usi una variabile di supporto max);

    int max = 0;
    if((a > b) && (a > c)){
        max = a;
    } else if((b > a) && (b > c)){
        max = b;
    } else if((c > a) && (c > b)){
        max = c;
    }

    printf("MAX tra %d %d %d : %d\n", a, b, c, max);

    // f) dati tre interi a, b e c, stampa a video "ordinati" se questi sono
    //    ordinati in modo crescente, altrimenti non stampare nulla.

    printf("PRIMA: %d %d %d\n", a, b, c);
    if((a > b) && (b > c)){
        printf("ordinati");
    }

    /*if((b > a) && (b > c)){
        printf("%d %d %d\n", b, c, a);
    } else if((c > b) && (c > a)){
        printf("%d %d %d\n", c, a, b);
    } */
}
