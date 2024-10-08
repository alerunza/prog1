#include <stdio.h>

int main(void){
    float pacchiOrecchiette = 1.50;
    float kgPomodori = 2.50;

    printf("La tua spesa prefissata: 3 pacchi di orecchiette: %f, 1kg e 1/2 di pomodori %f", pacchiOrecchiette * 3, kgPomodori * 1.5);

    puts("");

    printf("Inserisci il numero di pacchi di orecchiette: ");
    int inputPacchiOrecchiette;
    scanf("%d", &inputPacchiOrecchiette);
    
    printf("Inserisci il numero di kg di pomodori: ");
    int inputKgPomodori;
    scanf("%d", &inputKgPomodori);

    printf("La tua spesa: %f", pacchiOrecchiette * inputPacchiOrecchiette + kgPomodori * inputKgPomodori);
}