#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_vowel(char c);
bool esistono_vocali(char str[]);
void stampa_vocali(char str[]);

int main(void) {
    char strInput[100];

    scanf("%s", strInput);

    if (esistono_vocali(strInput)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    stampa_vocali(strInput);

    return 0;
}

bool is_vowel(char c) {
    char vocali[] = "AEIOUaeiou";

    bool ret = false;

    for (int i = 0; i < strlen(vocali); i++) {
        if (c == vocali[i]){
            ret = true;
        }
    }

    return ret;
}

bool esistono_vocali(char str[]) {
    int lenStringa = strlen(str);

    bool ret = false;

    for (int i = 0; i < lenStringa; i++) {
        if (is_vowel(str[i])) {
            ret = true;
        }
    }

    return ret;
}

void stampa_vocali(char str[]) {
    int lenStringa = strlen(str);

    for (int i = 0; i < lenStringa; i++) {
        if (is_vowel(str[i])) {
            printf("%c", str[i]);
        }
    }

    printf("\n");
}