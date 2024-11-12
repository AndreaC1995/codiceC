#include <stdio.h>

int main()
{
    int scelta;
    printf("\nBuongiorno manicomio:\n1 se sei matto\n2se sei paranoico\n3se vuoi killarti");
    scanf("%d", &scelta);
    switch(scelta)
    {
        case 1:
            printf("\nvorremmo parlare con un'altra personalita'");
            break;
        case 2:
            printf("\nTi avvisiamo che questa chiamata è condivisa con i poteri forty");
            break;
        case 3:
            printf("\nI nostri operatori stanno parlando con persone piu importanti di te");
            break;
        default:
            printf("Grazie Artur per averci contattato");
    }
    return 0;
}