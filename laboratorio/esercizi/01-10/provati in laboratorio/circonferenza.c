#include <stdio.h>
#include <math.h> // -lm da aggiungere per compilarlo su terminale

int main(void){

    float raggio;
    //input
    printf("Inserisci il raggio: ");
    scanf("%f", &raggio);

    float circonferenza = (2 * M_PI) * raggio;
    //float area = M_PI * (raggio * raggio);
    float area = M_PI * powf(raggio, 2.0);

    printf("%f %f\n", circonferenza, area);
    //printf("%f", M_PI);
}
