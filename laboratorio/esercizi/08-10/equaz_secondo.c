#include <stdio.h>
#include <math.h>

int main(void){
    
    int a, b, c;
    int x1, x2, delta = 0;

    printf("inserisci i tre coefficienti: a, b e c\n");
    scanf("%d%d%d", &a, &b, &c);

    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("equazione indeterminata\n");
            } else{
                printf("equazione impossibile\n");
            }
        } else{
            x1 = -c / b;
            printf("soluzione unica: %d\n", x1);
        }
    } else{
        delta = (b * b) - (4 * a * c);
        printf("delta: %d\n", delta);
        if(delta > 0){
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("soluzioni: %d %d\n", x1, x2);
        } else if (delta == 0){
            x1 = -b / (2 * a);
            printf("soluzione unica: %d\n", x1);
        } else if(delta < 0){
            printf("non ci sono soluzioni reali / Radici complesse coniugate\n");
        }
    }
}