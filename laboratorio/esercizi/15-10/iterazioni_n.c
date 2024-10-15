#include <stdio.h>

int main(void){

   int n = 0;

   printf("Inserisci un numero intero\n");
   scanf("%d", &n);

   printf("Incrementa:\n");
   for(int i = 0; i < n; ++i){

      printf("%d\n", i);

   }

   printf("Decrementa:\n");
   for(int i = n-1; i >= 0; --i){

      printf("%d\n", i);

   }

   printf("Elementi dispari in %d numeri:\n", n);
   for(int i = 0; i < n; ++i){
      if(i % 2 == 1){
         printf("%d\n", i);
      }
   }

   printf("Fattoriale di %d!\n", n);
   int fattoriale = 1;
   for(int i = n; i >= 1; --i){
      //printf("%d %d\n", i, fattoriale);
      fattoriale = fattoriale * i;
   }
   printf("%d\n", fattoriale);

}
