#include <stdio.h>

#define M_ROWS 2
#define M_COLS 3

int main(void) {
    int m[M_ROWS][M_COLS] = {{0,1,2},
                            {3,4,5}};
    int* pM = (int*) m;
    for (int i = 0; i < M_ROWS; i++) {
        for (int j = 0; j < M_COLS; j++) {
            printf ("m[%d][%d]@%p vale %d\n", i, j, pM, *pM);
            pM++;
        } //end for su j
    } // end for su i
}