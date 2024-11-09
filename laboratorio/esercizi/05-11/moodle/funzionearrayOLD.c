#include <stdio.h>
#include <stdbool.h>

#define lenMAX 20

void leggi_array(int array[], int* len);
int conta_univoci(int array[], int len);

int main(void) {
    
    int dimMax = 0;
    int arrayUno[lenMAX], arrayDue[lenMAX];
    
    leggi_array(arrayUno, &dimMax);
    
    //conta_univoci(arrayUno, dimMax);

    printf("Univoci: %d\n", conta_univoci(arrayUno, dimMax));

    /* for(int i = 0; i < dimMax; i++){
        printf("%d ", arrayUno[i]);
    } */
    
    puts("");
    
    leggi_array(arrayDue, &dimMax);
    
    printf("Univoci: %d\n", conta_univoci(arrayDue, dimMax));
    
    /* for(int i = 0; i < dimMax; i++){
        printf("%d ", arrayDue[i]);
    } */
    
    //stampa_elementi_ripetuti(arrayDue, arrayUno, dimMaxDue, dimMaxUno);
    puts("");
    //stampa_elementi_ripetuti(arrayUno, arrayDue, dimMaxUno, dimMaxDue);

}

void leggi_array(int array[], int* len){
    if(1 == scanf("%d", len) && (*len >= 0 && *len <= 20)){
        for(int i = 0; i < *len; i++){
            scanf("%d", &array[i]);
        }
    }
}

int conta_univoci(int array[], int len){
    int conta = 0;

    for(int i = 0; i < len; i++){
        int uguali = 0;

        for (int j = 0; j < len; j++){
            if (array[i] == array[j]){
                uguali++;
            }
        }

        if(uguali == 1){
            conta++;
        }
    }
    
    return conta;
}

void stampa_elementi_ripetuti(int arrUno[], int arrDue[], int lenUno, int lenDue){
    for(int i = 0; i < lenUno; i++){
        bool trovato = false;
        for(int j = 0; j < lenDue; j++){
            if(arrUno[i] == arrDue[j]){
                trovato = true;
            }
        }
        if(trovato){
            printf("%d ", arrUno[i]);
        }
    }
}