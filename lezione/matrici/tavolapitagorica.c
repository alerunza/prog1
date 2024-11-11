#include <stdio.h>

#define DIM1 10

void printMatrix(int r, int c, int m[][c]);
int sommaDiagonale(int r, int c, const int m[][c]);

int main(void) {
    int matrP[DIM1][DIM1]={0};
    int i,j;
    
    for (i=0; i<DIM1; i++) {
        for (j=0; j<DIM1; j++) {
            matrP[i][j] = (i+1)*(j+1);
        }
    }
    
    printMatrix(DIM1,DIM1,matrP);
    printf("La somma degli elementi sulla diagonale è %d\n", sommaDiagonale(DIM1, DIM1, matrP));
    
    return 0;
}

void printMatrix(int r, int c, int m[][c]){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d \t", m[i][j]);
        }
        puts("");
    }
}

int sommaDiagonale(int r, int c, const int m[][c]){
    int somma = 0;

    int min = r;
    
    if(c < min){
        min = c;
    }

/*     for (int i = 0; i < min; i++){
        somma += m[i][i];
    } */

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if(i == j){
                somma += m[i][j];
            }
        }
    }
    
    return somma;
}