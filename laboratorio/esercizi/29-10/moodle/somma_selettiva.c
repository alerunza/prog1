#include <stdio.h>

#define MAX_N 20

int main(void) {
    
    int N = 0, min;
    
    scanf("%d", &N);
    
    int array[MAX_N];
    
    if(N != 0){
        if(N < 0 || N > MAX_N){
            printf("Errore: numero di elementi non valido.\n");
        } else{
            for(int i = 0; i < N; i++){
                scanf("%d", &array[i]);
                if(i == 0 || array[i] < min){
                    min = array[i];
                }
            }
            int sum = 0;
            
            for(int i = 0; i < N; i++){
                
                if(array[i] >= (min * min)){
                    sum += array[i];
                }
            }
            printf("%d", sum);
        }
    } else{
        printf("Vuoto.\n");
    }   
}