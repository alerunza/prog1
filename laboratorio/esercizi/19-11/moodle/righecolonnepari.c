#include <stdio.h>
#include <stdbool.h>

void leggi_matrice(const size_t rows, const size_t cols,
				   int mat[rows][cols]) 
{
	for (size_t r=0; r<rows; r++) {
		for (size_t c=0; c<cols; c++) {
			scanf("%d", &mat[r][c]);
		}
	}
}

void righe_colonne_pari(const size_t rows, const size_t cols, int mat[rows][cols]);

int main(void) {
	// leggi le dimensioni della matrice rettangolare
	size_t rows, cols;
	scanf("%zu %zu", &rows, &cols);

	// riserva la memoria per la matrice di dimensione rows * cols
	int mat[rows][cols];
	
	// leggi i dati
	leggi_matrice(rows, cols, mat);
    
    righe_colonne_pari(rows, cols, mat);
}

void righe_colonne_pari(const size_t rows, const size_t cols, int mat[rows][cols]){
    //size_t colsPari = 0;
    
    for(size_t i = 0; i < rows; i++){
        bool isRowsPari = true;
        for(size_t j = 0; j < cols; j++){
            if((mat[i][j] % 2 != 0) || (mat[i][j] < 0)){
                isRowsPari = false;
            }
        }
        
        if(isRowsPari){
            for(size_t j = 0; j < cols; j++){
                bool isColsPari = true;
                for(size_t i = 0; i < rows; i++){
                    if ((mat[i][j] % 2 != 0) || (mat[i][j] < 0)) {
                        isColsPari = false;
                    }
                }
                
                if(isColsPari){
                    printf("%zu %zu\n", i, j);
                }
            }
        }
    }
    //printf("i: %zu j: %zu\n", i, j);
}