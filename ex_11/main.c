#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias, b,c,d;

    printf("informe a quantidade de dias sem acidentes\n");
    scanf ("%d", &dias);
    b=dias/360;
    c=dias/30;
    d=dias%30;
        printf ("a fabrica esta a %d anos %d meses %d dias sem acidente", b,c,d);
    return 0;
}
