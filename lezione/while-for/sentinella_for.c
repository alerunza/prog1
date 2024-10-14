#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int s = 0, i = 0, voto = 0;
    bool eseguiCiclo;
    for (i = 0, eseguiCiclo = true; i < 10 && eseguiCiclo;)
    {
        printf("%s", "Inserisci voto: ");
        scanf("%d", &voto);
        if (voto >= 0) {
            s = s + voto;
            i = i + 1;
        }
        else {
            eseguiCiclo = false;
        }
    }
    printf("Voto medio: %f\n", s/(float)i);
}