#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, total;
    printf("escreva o valor do litro de combustivel\n");
    scanf ("%f",&valor);
    printf ("informe o valor total pago em combustivel\n");
    scanf ("%f", &total);
    printf ("a quantidade total de combustivel foi %3.2f litros", total/valor);
    return 0;
}
