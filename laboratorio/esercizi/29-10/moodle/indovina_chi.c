#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define NUM_PERS 24
#define NUM_INDIZI 15

// I nomi dei soggetti fermati
const char* nomi[NUM_PERS] = {
    "Claire","Eric",   "Maria", "George","Bernard","Sam",    "Tom",    "Paul",
    "Joe",   "Frans",  "Anne",  "Max",   "Alex",   "Philip", "Bill",   "Anita",  
    "David", "Charles","Herman","Peter", "Susan",  "Robert", "Richard","Alfred", 
};

// Gli attributi dei soggetti fermati, codificati come stringa
const char* attributi[NUM_PERS] = {
    "drco", "bc",   "dtc", "wc",   "tcg",  "wpo",  "npzo", "wo",  
    "bo",   "r",    "dn",  "nfsg", "nfs",  "nal",  "rpal", "dblz", 
    "ba",   "bfs",  "rpg", "wszg", "dwls", "tlzg", "tpfa", "rfz", 
};

int main(void) {
    char indiziInput[NUM_INDIZI + 1]; // +1 per il terminatore '\0'

    //inserimento indizi
    scanf("%15s", indiziInput);

    int sospettiCount = 0;
    int lenIndizi = 0;

    //alternativa a strlen di <string.h>
    while (indiziInput[lenIndizi] != '\0') {
        lenIndizi++;
    }

    for (size_t i = 0; i < NUM_PERS; i++) {
        bool sospetto = true;

        for (size_t j = 0; j < lenIndizi; j++) {
            char indizio = indiziInput[j];
            bool trovato = false;

            size_t k = 0;
            while (attributi[i][k] != '\0' && !trovato) {
                if (islower(indizio) && attributi[i][k] == indizio) {
                    trovato = true;
                } else if (isupper(indizio) && attributi[i][k] == tolower(indizio)) {
                    trovato = true;
                    sospetto = false;
                }
                k++;
            }

            if ((islower(indizio) && !trovato) || (isupper(indizio) && !sospetto)) {
                sospetto = false;
                j = lenIndizi; // termina il ciclo
            }
        }

        if (sospetto) {
            printf("%s\n", nomi[i]);
            sospettiCount++;
        }
    }

    printf("%d\n", sospettiCount);

    return 0;
}