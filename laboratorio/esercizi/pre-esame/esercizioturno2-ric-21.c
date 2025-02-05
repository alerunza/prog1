#include <stdio.h>
#include <stdbool.h>

int e2R(const bool a[], 
       const bool b[], size_t left, size_t right, size_t* c) {
    if (right-left == 1) {
        if(a[left] == true && b[left] == true) {
            *c += 1;
        }
    } else if (right-left > 0) {
        size_t middle = (left+right) / 2;
        e2R(a, b, left, middle, c);
        e2R(a, b, middle+1, right, c);
    }
}

/* int e2R(const bool a[], const bool b[], size_t left, size_t right) {
    if (left == 0 || right == 0) { // Caso base: fine della ricorsione
        return 0;
    }

    if (a[left - 1] == true && b[right - 1] == true) { // Gli elementi corrispondono
        return 1 + e2R(a, b, left - 1, right - 1);
    } else { // Gli elementi non corrispondono
        return e2R(a, b, left - 1, right - 1);
    }
}
 */

size_t e2(const size_t aLen,const bool a[], 
       const size_t bLen,const bool b[]) 
{
    return e2R(a, b, 0, bLen, 0);
}

#include <stdio.h>

int main() {
    const bool a[] = {true, false, true, true, true, true};
    const bool b[] = {false, true, true, true, false};
    size_t aLen = 6;
    size_t bLen = 5;

    size_t result = e2(aLen, a, bLen, b);
    printf("Numero di corrispondenze: %zu\n", result); // Expected: 2
    return 0;
} 