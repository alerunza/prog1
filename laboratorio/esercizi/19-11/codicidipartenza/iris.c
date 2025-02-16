#include <stdio.h>

#define ROWS  3
#define COLS  40

//------------------------------------------------------------------
// Prototipi delle funzioni
//------------------------------------------------------------------

// calcola e ritorna la media dei valori alla riga r della matrice
float media_riga(const float mat[ROWS][COLS], 
                 const size_t rags[ROWS],
                 const size_t r);

// trova il minimo ed il massimo dei valori alla riga r
// della matrice. I valori trovati sono scritti in *pMin e *pMax
void minmax_riga(const float mat[ROWS][COLS], 
                 const size_t rags[ROWS],
                 const size_t r, float *pMin, float* pMax);

// filtra la riga r della matrice ragged mantenendo solo gli elementi
// strettamente maggiori di min e strettamente minori di max. La funzione deve
// inoltre aggiornare in modo appropriato il valore di rags[r].
void filtra_riga_minmax(float mat[ROWS][COLS], 
                        size_t rags[ROWS],
                        const size_t r, 
                        float min, float max);

//------------------------------------------------------------------

int main(void) {
    // Lunghezze dei petali degli Iris in cm.
    // fonte dei dati: "The use of multiple measurements 
    //   in taxonomic problems", Ronald Aylmer Fisher, 1936. [estratto]
    // Matrice in forma ragged: ogni riga e' una specie; 
    // gli elementi di ciascuna riga sono i campioni statistici raccolti.
    float mat[ROWS][COLS] = {
        // Iris Setosa
        { 1.4, 1.4, 1.3, 1.5, 1.4, 1.7, 1.4, 1.5, 1.4, 1.5, 
          1.5, 1.6, 1.4, 1.1, 1.2, 1.5, 1.3, 1.4, 1.7, 1.5, 
          1.7, 1.5, 1.0 },
        // Iris Versicolor
        { 4.7, 4.5, 4.9, 4.0, 4.6, 4.5, 4.7, 3.3, 4.6, 3.9, 
          3.5, 4.2, 4.0, 4.7, 3.6, 4.4, 4.5, 4.1 },
        // Iris Virginica
        { 6.0, 5.1, 5.9, 5.6, 5.8, 6.6, 4.5, 6.3, 5.8, 6.1, 
          5.1, 5.3, 5.5, 5.0, 5.1, 5.3, 5.5, 6.7, 6.9, 5.0, 
          5.7, 4.9, 6.7, 4.9, 5.7, 6.0, 4.8, 4.9, 5.6, 5.8, 
          6.1 },
    };
    // numero di campioni per specie
    // (lunghezza delle righe della matrice ragged)
    size_t rags[ROWS] = { 23, 18, 31 };

    // nomi delle specie di Iris considerate
    const char* specie[ROWS] = {
        "Iris Setosa", "Iris Versicolor", "Iris Virginica"
    };

    // Calcola medie e valori estremi dai dati raccolti
    // per le tre specie di Iris.
    float min_vals[ROWS], max_vals[ROWS];
    for (size_t i=0; i<ROWS; i++) {
        minmax_riga(mat, rags, i, &min_vals[i], &max_vals[i]);
    }

    // Stampa i risultati prima dell'eliminazione dei 
    // campioni con valori estremi
    puts("Specie            Campioni Media  Estremi");
    for (size_t i=0; i<ROWS; i++) {
        printf("%-20s %2zu    %.2f   (min: %.2f max: %.2f)\n",
               specie[i], rags[i],
               media_riga(mat, rags, i), 
               min_vals[i], max_vals[i]);
    }

    // Filtra i valori non estremi
    for (size_t i=0; i<ROWS; i++) {
        filtra_riga_minmax(mat, rags, i, min_vals[i], max_vals[i]);
    }

    puts("\nDopo eliminazione valori estremi:");
    // Stampa nuovamente le medie dopo l'eliminazione dei 
    // campioni con valori estremi
    puts("Specie            Campioni Media");
    for (size_t i=0; i<ROWS; i++) {
        printf("%-20s %2zu    %.2f\n",
               specie[i], rags[i],
               media_riga(mat, rags, i));
    }
}

float media_riga(const float mat[ROWS][COLS], const size_t rags[ROWS], const size_t r){

    float media = 0;

    for (size_t j = 0; j < rags[r]; j++){
        media += mat[r][j] / rags[r];
    }

    return media;
}

void minmax_riga(const float mat[ROWS][COLS], const size_t rags[ROWS], const size_t r, float *pMin, float* pMax){

    *pMin = mat[r][0];
    *pMax = mat[r][0];

    for (size_t j = 0; j < rags[r]; j++){
        if(mat[r][j] < *pMin){
            *pMin = mat[r][j];
        }
        if(mat[r][j] > *pMax){
            *pMax = mat[r][j];
        }
    }
}

void filtra_riga_minmax(float mat[ROWS][COLS], size_t rags[ROWS], const size_t r, float min, float max){
    size_t j = 0;

    for (size_t i = 0; i < rags[r]; i++){
        if(mat[r][i] > min && mat[r][i] < max){
            mat[r][j] = mat[r][i];
            j++;
        }
    }

    // nuovi campioni (valori)
    rags[r] = j;
}