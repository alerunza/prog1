#include <stdio.h>
int main()
{
    int n;
    printf("Scrivi un numero intero: ");
    scanf("%d", &n);
    // stampa i primi 10 multipli di n
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}