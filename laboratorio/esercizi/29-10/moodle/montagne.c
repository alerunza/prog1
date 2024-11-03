#include <stdio.h>

#define lenCaratteri 50

int main(void){
    
    char nome_montagna[lenCaratteri];
    int altezza = 0, max_altezza[100];
    
    char montagna_alta[lenCaratteri];
    
    int z = 0;
    
    while(2 == scanf("%s %d", nome_montagna, &altezza) && altezza > 0){
        if(altezza > max_altezza[z++]){
            max_altezza[z] = altezza;
        }
        if(altezza >= max_altezza[z]){
            for(int i = 0; nome_montagna != '\0' && i < lenCaratteri-1; i++){
                montagna_alta[i] = nome_montagna[i];
            }
            montagna_alta[lenCaratteri] = '\0';
        }
    }
    
    printf("%s\n", montagna_alta);
    
}