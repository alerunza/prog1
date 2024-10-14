#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int s = 0, i = 0, voto = 0;
    int eseguiCiclo = true;
    do {
        printf("Inserisci voto: ");
        scanf("%d", &voto);
        if (voto >= 0) {
            s = s + voto; i = i + 1;
        }
        else {
            eseguiCiclo = false;
        }
    } while (eseguiCiclo);
    printf("Voto medio: %f\n", s/(float)i);
}