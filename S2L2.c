#include <stdio.h>
int main ()
{
    int primo;
    int secondo;
    int risultato;

    printf("\ninserisci primo numero: ");
    scanf("%d", &primo);

    printf("\nInserisci secondo numero: ");
    scanf("%d", &secondo);

    risultato = primo * secondo;

    printf("\n%d * %d = %d\n", primo, secondo, risultato);
    return 0;
}