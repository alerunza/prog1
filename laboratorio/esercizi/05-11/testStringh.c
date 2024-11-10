#include <stdio.h>
#include <string.h>

int main() {
    // Esempio per strlen
    const char* str1 = "Ciao, mondo!";
    size_t lunghezza = strlen(str1);
    printf("La lunghezza di \"%s\" è %zu caratteri.\n", str1, lunghezza);

    // Esempio per strcmp
    const char* str2 = "Ciao";
    const char* str3 = "Ciao";
    const char* str4 = "Arrivederci";
    
    int confronto1 = strcmp(str2, str3);
    int confronto2 = strcmp(str2, str4);
    
    printf("Confronto tra \"%s\" e \"%s\": %d\n", str2, str3, confronto1);
    printf("Confronto tra \"%s\" e \"%s\": %d\n", str2, str4, confronto2);

    // Esempio per strncpy
    char destinazione[20];
    const char* sorgente = "Salve!";
    
    strncpy(destinazione, sorgente, sizeof(destinazione) - 1);
    destinazione[sizeof(destinazione) - 1] = '\0';  // Assicura che la stringa sia terminata da '\0'
    printf("Stringa copiata: %s\n", destinazione);

    return 0;
}