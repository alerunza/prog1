#include <stdio.h>

//Ricorsione aritmetica
int sommaDivisori(int n); // wrapper
int sommaDivisoriR_R2L(int n, int right);

int main(){
    int n = 8;

    printf("Somma dei divisori di %d: %d\n", n, sommaDivisori(n));
    
}

int sommaDivisori(int n){ // wrapper
    return sommaDivisoriR_R2L(n, n - 1); // escluso n right to left
}

int sommaDivisoriR_R2L(int n, int right){
    if(right == 0){
        return 0;
    } else{
        if(n % right == 0){
            return right + sommaDivisoriR_R2L(n, right - 1);
        } else{
            return sommaDivisoriR_R2L(n, right - 1);
        }
    }
}