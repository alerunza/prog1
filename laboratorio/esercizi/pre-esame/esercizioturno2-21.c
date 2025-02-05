#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>

/* Definire una funzione C iterativa di nome el con le seguenti caratteristiche:
• el dipende dai seguenti parametri:
• una matrice sfrangiata di interi descritta secondo la convenzione:
• Rig: numero righe;
• nCol: numero massimo colonne;
• rags[nRig]: numero colonne in ogni riga;
• mat: puntatore alla matrice;
• un puntatore a un valore booleano, di nome pe, usato come risultato;
• un puntatore a un valore intero, di nome s, usato come risultato;
• el soddisfa i seguenti requisiti:
1. scrive true in *pe se, e solo se, per ogni indice r di riga, esiste un indice c di colonna, tale che mat[r][c] è pari. 
In tal caso, e1 scrive in *s la somma dei primi elementi pari di ogni riga, cioè mat[r][c] con c minimo, per ogni riga r;
2. altrimenti, el scrive false in *pe e il valore di s restituito, deve essere 0. */

void e1(const size_t nRig, const size_t nCol, 
    const size_t rags[nRig], const int mat[nRig][nCol],
    bool* pe, int* s) 
{
    *pe = false;
    *s = 0;

    bool contiene_multiplo[nRig];
    for (size_t i = 0; i < nRig; ++i) {
        *pe = false;
        for (size_t j = 0; j < rags[i] && !*pe; ++j) {
            if (mat[i][j] % 2 == 0) {
                *pe = true;
                contiene_multiplo[i] = true;
                *s += mat[i][j];
            }
        }
        if (!*pe) {
            contiene_multiplo[i] = false;
        }
    }

    for (size_t i = 0; i < nRig; ++i) {
        *pe = *pe && contiene_multiplo[i];
    }

    if (!*pe) {
        *s = 0;
    }
}

int main() {
    size_t nRig = 3;
    size_t nCol = 4;
    size_t rags[] = {4, 3, 4};
    int mat[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7},
        {8, 9, 10, 11}
    };
    bool pe;
    int s;

    e1(nRig, nCol, rags, mat, &pe, &s);

    if (pe) {
        printf("Tutti i valori di riga contengono almeno un numero pari.\n");
        printf("La somma dei primi elementi pari di ogni riga è: %d\n", s);
    } else {
        printf("Non tutte le righe contengono almeno un numero pari.\n");
        printf("La somma è: %d\n", s);
    }

    return 0;
}
