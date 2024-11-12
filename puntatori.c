#include <stdio.h>

void scriviArray(int *ptr){

    for(int i=0; i < 10; i++){
        printf("Inserisci n[%d]: ", i);
        scanf("%d", ptr);
        ptr++;
    }
}

void leggiArray(int *ptr)
{
    for (int i=0; i<10; i++){
        printf("\nElemento n[%d] = %d (zona memoria 0x%x)", i, *ptr, ptr);
        ptr++;
    }
}

int main(){
    int n[10] = {0};
    int *n_ptr;

    n_ptr = &n[0];

    scriviArray (n_ptr);
    leggiArray (n_ptr);
}