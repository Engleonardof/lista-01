#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a=12;
    float peso=10;
    printf("informe o peso total em quilos \n");
    scanf ("%f", &peso);
    printf ("o valor total a pagar e: %3.2f reais", peso*a);
    return 0;
}
