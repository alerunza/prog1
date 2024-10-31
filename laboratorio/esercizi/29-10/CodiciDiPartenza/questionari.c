#include <stdio.h>

#define NUM_RISP 20 // numero risposte al questionario

#define stelleFrequenze 5

int main() {
	// valori delle risposte ai questionari
	const int risposte[NUM_RISP] = {
		1, 2, 5, 4, 3,  5, 2, 1, 3, 1,
		4, 3, 3, 3, 2,  3, 3, 2, 2, 5
	};

	int frequenze[stelleFrequenze];

    // inizializza a 0 array frequenze
    for (size_t i = 1; i <= stelleFrequenze; i++) {
        frequenze[i] = 0;
    }

    //conta frequenze
    for(size_t i = 1; i <= stelleFrequenze; i++){
        for(size_t j = 0; j < NUM_RISP; j++){
            if(i == risposte[j]){
                frequenze[i]++;
            }
        }
    }

    //stampa frequenze
    printf("\nStelle  Frequenza");
    for (size_t i = 1; i <= stelleFrequenze; i++) {
        printf("%6zu %7d ", i, frequenze[i]);

        //stampa bar chart per frequenze '#'
        for(size_t j = 1; j <= frequenze[i]; j++){
            printf("%c", '#');
        }

        puts("");
    }

	// calcola le frequenze delle risposte
}
