#include <stdio.h>
#include <stdlib.h>

int main()
{
   float salario,reajuste,novo;
    printf("digite o seu salario atual \n");
    scanf ("%f",&salario);
    reajuste = salario*1.15;
    novo= reajuste*0.92;
    printf ("seu salario inicial era %.2f \n , com o aumento ficou %.2f \n e apos os descontos o novo salario e %.2f", salario,reajuste,novo);
    return 0;
}
