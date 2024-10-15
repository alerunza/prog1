#include <stdio.h>

int main(void){

   int n, z = 1;

   printf("Inserisci un numero intero: ");
   scanf("%d", &n);

   for(int i = 1; i <= n; i++){
      for(int j = 1; j <= i; j++){
         printf("%d ", z);
         z++;
      }
      puts("");
   }
}
