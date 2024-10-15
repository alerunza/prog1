#include <stdio.h>

int main(void){

   int num, sum = 0, i = 0;

   printf("Inserisci numeri interi, una volta finito inserisci 0\n");
   while(1 == scanf("%d ", &num) && num != 0){
      if(num != 0){
         sum += num;
         i += 1;
      }
   }



   printf("Media: %d\n", sum/i);
}
