#include <stdio.h>

int main ()
{
    int primo;
    int secondo;
    int somma;
    float media;

    printf("\nInserisci primo numero: ");
    scanf("%d", &primo);

    printf("\nInserisci secondo numero: ");
    scanf("%d", &secondo);

    somma = primo + secondo;
    media = (float)somma / 2;

    printf("\n%d + %d = %d\n", primo, secondo, somma);
    printf("\nLa media di %d e %d è %.2f\n", primo, secondo, media);

    return 0;
}