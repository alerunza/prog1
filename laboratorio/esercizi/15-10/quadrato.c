#include <stdio.h>

int main(void){

   int n;

   scanf("%d", &n);

   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
         if(i == j){
            printf("\\");
         } else if(i > j){
            printf("*");
         } else if(i < j){
            printf(":");
         }
      }
      puts("");
   }

}
