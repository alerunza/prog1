#include <stdio.h>

#define PI_GRECO 3.1415926535f

void Circonferenza(float r, float *circonferenza);
void Area(float r, float *area);

int main(void) {

    printf("Inserisci il raggio del cerchio: ");
    float r;
    scanf("%f", &r);
    
    float circonferenza = 0;
    Circonferenza(r, &circonferenza);
            
    printf("La circonferenza del cerchio e': %f\n", circonferenza);

    float area = 0;
    Area(r, &area);

    printf("L'area del cerchio e': %f\n", area);
}

void Circonferenza(float r, float *circonferenza) {
    *circonferenza = 2 * PI_GRECO * r;
}

void Area(float r, float *area) {
    *area = PI_GRECO * r * r;
}