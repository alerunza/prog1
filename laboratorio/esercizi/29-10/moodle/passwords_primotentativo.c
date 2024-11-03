#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define lenMax 20

int main(void){
    
    char password[lenMax];
    
    //inserimento password
    for(size_t i = 0; i < lenMax; i++){
        scanf("%s", password);
    }
    
    size_t lenPassword = strlen(password);
    
    password[lenPassword] = '\0';
    
    bool esisteCifra = false, tuttiLettere = true, esisteMaiuscolo = false, esisteCifreConsecutive = false, nessunoUltimiDueChar = false;
    
    //esiste almeno un carattere che è una cifra - P1
    for(size_t i = 0; i < lenPassword && !esisteCifra; i++){
        if(isdigit(password[i])){
            esisteCifra = true;
        }
    }
    
    //tutti i caratteri sono lettere - P2
    for(size_t i = 0; i < lenPassword && tuttiLettere; i++){
        if(!isalpha(password[i])){
            tuttiLettere = false;
        }
    }
    
    int countUpper = 0;
    //ci sono almeno due lettere maiuscole - P3
    for(size_t i = 0; i < lenPassword && countUpper < 2; i++){
        if(isupper(password[i])){
            countUpper++;
        }
    }
    esisteMaiuscolo = (countUpper >= 2);
    
    //ci sono almeno due lettere maiuscole - P3
    for(size_t i = 0; i < lenPassword && !esisteCifreConsecutive; i++){
        if(isdigit(password[i]) && isdigit(password[i + 1])){
            esisteCifreConsecutive = true;
        }
    }
    
    //ultimi due caratteri sono segni di punteggiatura - P5
    for (size_t i = lenPassword - 2; i < lenPassword && !nessunoUltimiDueChar; i++) {
        if (ispunct(password[i]) && ispunct(password[i + 1])){
            nessunoUltimiDueChar = true;
        }
    }
    
    printf("%s %d %d %d %d %d", password, esisteCifra, tuttiLettere, esisteMaiuscolo, esisteCifreConsecutive, nessunoUltimiDueChar);
}