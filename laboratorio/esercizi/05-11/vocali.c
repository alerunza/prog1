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

    for (int i = 0; i < strlen(vocali); i++) {
        if (c == vocali[i]) {
            return true;
        }
    }

    return false;
}

bool esistono_vocali(char str[]) {
    int lenStringa = strlen(str);

    for (int i = 0; i < lenStringa; i++) {
        if (is_vowel(str[i])) {
            return true;
        }
    }

    return false;
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