#include <stdio.h>

int main(){
    int numeri [3];
    numeri[0] = 1;
    numeri[1] = 4;
    numeri[2] = 64;
    printf("%d\n", numeri[2]);

    int anum[] = {1,2,3,456,5,3};
    printf("0x%x = %d\n", &anum[2], anum[2]);

    float dec[] = {1.2, 3.23, 0.89};
    printf("0x%x = %d\n", &dec[2], dec[2]);
    printf("0x%x = %d\n", &dec[1], dec[1]);

    return 0;
}