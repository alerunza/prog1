#include <stdio.h>

int main(void){

    int ora;

    printf("Inserisci l'ora: \n");
    scanf("%d", &ora);

    if((ora >= 6) && (ora <= 11)){
        printf("Buongiorno\n");
    } else if((ora >= 12) && (ora <= 16)){
        printf("Buon pomeriggio\n");
    } else if((ora >= 17) && (ora <= 21)){
        printf("Buonasera\n");
    } else if((ora >= 22) && (ora <= 24)){
        printf("Buona notte\n");
    }
}
