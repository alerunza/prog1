#include <stdio.h>
#include <stdbool.h>

#define lenMAX 20

void leggi_array(int array[], int* len);
int conta_univoci(int array[], int len);
void stampa_elementi_ripetuti(int arrUno[], int arrDue[], int lenUno, int lenDue);

int main(void) {
    
    int dimMaxUno = 0, dimMaxDue = 0;
    int arrayUno[lenMAX], arrayDue[lenMAX];
    
    leggi_array(arrayUno, &dimMaxUno);
    
    leggi_array(arrayDue, &dimMaxDue);
    
    printf("%d %d\n", conta_univoci(arrayUno, dimMaxUno), conta_univoci(arrayDue, dimMaxDue));

    stampa_elementi_ripetuti(arrayUno, arrayDue, dimMaxUno, dimMaxDue);
}

void leggi_array(int array[], int* len){
    if(1 == scanf("%d", len) && (*len >= 0 && *len <= lenMAX)){
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
            // esempio: 1 == 1 incrementa, se trova 1 == 2 non incrementa
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


void stampa_elementi_ripetuti(int arrUno[], int arrDue[], int lenUno, int lenDue) {
    for (int i = 0; i < lenUno; i++) {
        bool trovato = false;
        for (int j = 0; j < lenDue; j++) {
            if (arrUno[i] == arrDue[j]) {
                trovato = true;
            }
        }
        if (trovato) {
            printf("%d ", arrUno[i]);
        }
    }
}