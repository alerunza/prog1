#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define NUM_PERS 24
#define NUM_INDIZI 15

// I nomi dei soggetti fermati
const char* nomi[NUM_PERS] = {
    "Claire","Eric",   "Maria", "George","Bernard","Sam",    "Tom",    "Paul",
    "Joe",   "Frans",  "Anne",  "Max",   "Alex",   "Philip", "Bill",   "Anita",  
    "David", "Charles","Herman","Peter", "Susan",  "Robert", "Richard","Alfred", 
};

// Gli attributi dei soggetti fermati, codificati come stringa
const char* attributi[NUM_PERS] = {
    "drco", "bc",   "dtc", "wc",   "tcg",  "wpo",  "npzo", "wo",  
    "bo",   "r",    "dn",  "nfsg", "nfs",  "nal",  "rpal", "dblz", 
    "ba",   "bfs",  "rpg", "wszg", "dwls", "tlzg", "tpfa", "rfz", 
};

int main(void) {
	char indiziInput[NUM_INDIZI];
	
	//inserimento indizi
    scanf("%s", indiziInput);
	
	//bool sospetto = true;
	
	for(size_t i = 0; i < NUM_PERS; i++){
        for(size_t j = 0; j < NUM_INDIZI; j++){
            if(islower(indiziInput[j])){
                if(indiziInput[j] == attributi[i]){
                    
                }
            }
        }
	}
	
}
