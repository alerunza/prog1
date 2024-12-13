#include <stdio.h>

/* Funzione che, dato un array a, restituisce un secondo array b 
con tutti e soli gli elementi dispari di a, nell’ordine 
in cui compaiono in a. */

void copiaDispari(const int lenA, const int a[], int* p_lenB, int b[]); //wrapper
void copiaDispariR_Dic(const int lenA, const int a[], int* p_lenB, int b[], int left, int right);

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int lenA = sizeof(a) / sizeof(a[0]);
    int b[lenA];
    int lenB;

    copiaDispari(lenA, a, &lenB, b);

    printf("Array b: ");
    for(int i = 0; i < lenB; i++){
        printf("%d ", b[i]);
    }

    printf("\n");
}

void copiaDispari(const int lenA, const int a[], int* p_lenB, int b[]){ //wrapper
    if(lenA == 0){
        *p_lenB = 0;
    } else{
        *p_lenB = 0;
        copiaDispariR_Dic(lenA, a, p_lenB, b, 0, lenA);
    }
}

void copiaDispariR_Dic(const int lenA, const int a[], int* p_lenB, int b[], int left, int right){
    if(right - left == 1){
        if(a[left] % 2 != 0){ // caso base: intervallo con 1 elemento
            b[*p_lenB] = a[left];
            (*p_lenB)++;
        }
    } else{ // passo induttivo: dimezzamento intervallo
        int middle = left + (right - left) / 2;

        copiaDispariR_Dic(lenA, a, p_lenB, b, left, middle);
        copiaDispariR_Dic(lenA, a, p_lenB, b, middle, right);
    }
}