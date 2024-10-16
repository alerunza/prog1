#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TENTATIVI 7

int main(void)
{
	// Genera un numero pseudo-casuale tra 0 (incluso) e 100 (escluso)
	srand(time(0));
	int numero = rand() % 100;
	printf("rand: %d\n", numero);

	// VARIANTE 1:
	// Chiedi all'utente di indovinare il numero.
	// L'utente inserisce un intero t come tentativo
	// - Se t è il numero da indovinare, stampa un messaggio e termina
	// - Se t è maggiore del numero da indovinare, stampa un messaggio
	//   appropriato e procedi con un nuovo tentativo
	// - Procedi similmente se t è minore, con un diverso messaggio.
	int t;
/* 	while(t != numero){
		printf("Indovina il numero tra 0 e 99: ");
		scanf("%d", &t);
		if(t == numero){
			printf("Hai indovinato!\n");
		}
		if(t > numero){
			printf("Il numero da indovinare è minore, riprova\n");
		} else if(t < numero){
			printf("Il numero da indovinare è maggiore, riprova\n");
		}
	} */

	// VARIANTE 2:
	// memorizza in una variabile num_tentativi il numero
	// di tentativi che l'utente ha fatto. Quando il numero da indovinare
	// viene trovato, stampa a video il numero di tentativi effettuati.

	int num_tentativi = 0;

/* 	while(t != numero){
		printf("Indovina il numero tra 0 e 99: ");
		scanf("%d", &t);
		num_tentativi++;
		if(t == numero){
			printf("Hai indovinato! con: %d tentativi\n", num_tentativi);
		}
		if(t > numero){
			printf("Il numero da indovinare è minore, riprova\n");
		} else if(t < numero){
			printf("Il numero da indovinare è maggiore, riprova\n");
		}
	} */


	// VARIANTE 3:
	// Se l'utente supera MAX_TENTATIVI, termina il ciclo e stampa 
	// un messaggio di sconfitta, svelando anche il numero da indovinare.

	while(num_tentativi < MAX_TENTATIVI && t != numero){
		printf("Indovina il numero tra 0 e 99, hai 7 tentativi: ");
		scanf("%d", &t);
		num_tentativi++;
		if(t == numero){
			printf("Hai indovinato! con: %d tentativi\n", num_tentativi);
		}
		if(t > numero){
			printf("Il numero da indovinare è minore, riprova\n");
		} else if(t < numero){
			printf("Il numero da indovinare è maggiore, riprova\n");
		}

		if(num_tentativi == MAX_TENTATIVI){
			printf("Hai perso! Il numero da indovinare era: %d\n", numero);
		}
	}	

}
