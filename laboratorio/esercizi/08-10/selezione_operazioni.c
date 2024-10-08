#include <stdio.h>

int main(void){

    int x1, x2, x3, scelta, operazione = 0;

    printf("inserisci tre interi: \n");
    scanf("%d%d%d", &x1, &x2, &x3);

    printf("scrivi 1 per calcolare la somma\nscrivi 2 per calcolare il prodotto\nscrivi 3 per calcolare la media\n");
    scanf("%d", &scelta);

    if(scelta == 1){
        operazione = x1 + x2 + x3;
        printf("somma: %d\n", operazione);
    } else if(scelta == 2){
        operazione = x1 * x2 * x3;
        printf("prodotto: %d\n", operazione);
    } else if(scelta == 3){
        operazione = (x1 + x2 + x3) / 3;
        printf("media: %d\n", operazione);
    } else{
        printf("scelta non valida\n");
    }
}