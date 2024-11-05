#include <stdio.h>
#include <stdbool.h>

// Prototipo della funzione:
bool verifica_primalita(int n);

int main(void) {

    for(int i = 2; i < 100; i++){
        if(verifica_primalita(i)){
            printf("%d\t ", i);
        }
    }
	// Chiama la funzione dichiarata
	//verifica_primalita(n);
}


// Implementazione della funzione verifica_primalita()
// ritorna true se n è primo, false altrimenti
// ritorna sempre false per qualsiasi n < 2
bool verifica_primalita(int n) {

    bool isPrime = true;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
        }
    }

    return isPrime;
}
