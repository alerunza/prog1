#include <stdio.h>

int main() {
    const int forbici = 1;
    const int carta = 2;
    const int sasso = 3;
    const int lucertola = 4;
    const int spock = 5;
    
    int Sheldon = 0; // sheldon
    int Leonard = 0; // leonard
    
    scanf("%d%d", &Sheldon, &Leonard);
    
    if((Sheldon >= 1 && Sheldon <= 5) && (Leonard >= 1 && Leonard <= 5)){
        if(Sheldon == Leonard){
            printf("Pareggio");
        } 
        // forbici vs carta & lucertola
        else if(((Sheldon == forbici && Leonard == carta) || (Sheldon == forbici && Leonard == lucertola))){
            printf("Sheldon");
        } else if (((Leonard == forbici && Sheldon == carta) || (Leonard == forbici && Sheldon == lucertola))){
            printf("Leonard");
        }
        // carta vs spock & sasso
        else if(((Sheldon == carta && Leonard == spock) || (Sheldon == carta && Leonard == sasso))){
            printf("Sheldon");
        } else if (((Leonard == carta && Sheldon == carta) || (Leonard == carta && Sheldon == sasso))){
            printf("Leonard");
        }
        // spock vs forbici & sasso
        else if(((Sheldon == spock && Leonard == forbici) || (Sheldon == spock && Leonard == sasso))){
            printf("Sheldon");
        } else if (((Leonard == spock && Sheldon == forbici) || (Leonard == spock && Sheldon == sasso))){
            printf("Leonard");
        }        
        // lucertola vs spock & carta
        else if(((Sheldon == lucertola && Leonard == spock) || (Sheldon == lucertola && Leonard == carta))){
            printf("Sheldon");
        } else if (((Leonard == lucertola && Sheldon == spock) || (Leonard == lucertola && Sheldon == carta))){
            printf("Leonard");
        }         
        // sasso vs lucertola & forbici
        else if(((Sheldon == sasso && Leonard == lucertola) || (Sheldon == sasso && Leonard == forbici))){
            printf("Sheldon");
        } else if (((Leonard == sasso && Sheldon == lucertola) || (Leonard == sasso && Sheldon == forbici))){
            printf("Leonard");
        } 
    } else{
        printf("Non valido");
    }
    // COMPLETARE IL CODICE
}