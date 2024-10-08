#include <stdio.h>

int main(void) {
    // La costante pi greco
    const float PI_GRECO = 3.1415926535f;
    // DOMANDA: cosa significa const?

    // La costante pi greco è comunque già definita nel linguaggio C:
    // si chiama M_PI ed è disponibile con l'inclusione di <math.h>

    // Chiediamo all'utente il raggio
    printf("Inserisci il raggio del cerchio: ");
    float r;
    scanf("%f", &r);
    
    // Calcolo della circonferenza e dell'area
    // ESERCIZIO: completare il codice
    float circonferenza;
    circonferenza = 2 * PI_GRECO * r;
    //??? circonferenza = ????
            
    printf("La circonferenza del cerchio e': %f\n", circonferenza);

    // ESERCIZIO: completare il codice
    float area;
    area = PI_GRECO * r * r;
    //??? area = ????

    printf("L'area del cerchio e': %f\n", area);
}