#include <stdio.h>

int main(void){

    int s = 0, i = 0, voto = 0;
    while (i < 10) {
        printf("Inserisci voto: ");
        scanf("%d", &voto);
        s = s + voto;
        i = i + 1;
    }
    printf("Voto medio: %f\n", s/(float)10);
}