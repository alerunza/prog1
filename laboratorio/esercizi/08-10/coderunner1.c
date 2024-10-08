#include <stdio.h>

int main(void) {
    // COMPLETA IL CODICE

    int n, m;
    //printf("Inserisci due numeri: ");
    scanf("%d %d", &n, &m);

    if((n % 2 == 0) && (n > m)){
        printf("C1\n");
    } else if((n % 2 == 0) && (n <= m)){
        printf("C2\n");
    } else if(n % 2 != 0){
        if(m % 2 != 0){
            printf("C3\n");
        } else if(m > (n * 2)){
            printf("C4\n");
        } else{
            printf("ALTRO\n");
        }
    }
}
