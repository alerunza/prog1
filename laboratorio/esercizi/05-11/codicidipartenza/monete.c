#include <stdio.h>

// Definiamo i tagli delle monete
#define NUM_TAGLI 6
const int tagli_monete[NUM_TAGLI] = {1, 2, 5, 10, 20, 50};

void cambio_taglio(int ammontare, const int tagli[], int tagli_fatti[]);

int main(void) {
	// Chiedi all'utente la somma da convertire
	int cent;
	printf("Scrivere l'ammontare da convertire in monete: ");
	scanf("%d", &cent);

    int tagli_effettuati[NUM_TAGLI] = {0};

    cambio_taglio(cent, tagli_monete, tagli_effettuati);

    for(size_t i = NUM_TAGLI - 1; i > 0; i--){
        if(tagli_effettuati[i] > 0){
            printf("%d da %d cent\n", tagli_effettuati[i], tagli_monete[i]);
        }
    }

}

void cambio_taglio(int ammontare, const int tagli[], int tagli_fatti[]){

    for(size_t i = NUM_TAGLI - 1; i > 0; i--){
        tagli_fatti[i] = ammontare / tagli[i];
        ammontare %= tagli[i];
    }

}
