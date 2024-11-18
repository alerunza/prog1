#include <stdio.h>
#include <assert.h>

#define ROWS 3
#define COLS 4

void stampa(size_t rows, size_t cols, int m[rows][cols], int rags[]);

int main(void) {
    int m[ROWS][COLS]={{18,15,18,26},
                        {15,29},
                        {15,16,23}};
    
    int rags[ROWS] = {4, 2, 3};

    stampa(ROWS, COLS, m, rags);
}

void stampa(size_t rows, size_t cols, int m[rows][cols], int rags[]) {
    for (size_t i = 0; i < rows; i++) {
        assert (rags[i] <= cols);
        for(size_t j = 0;j<rags[i];j++) {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}