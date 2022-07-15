#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,p,m,g;
    a=10;
    b=12;
    c=15;
    printf("informe a quantidade de pecas do tamanho p:\n");
    scanf ("%d",&p);
    printf("informe a quantidade de pecas do tamanho m:\n");
    scanf ("%d",&m);
    printf("informe a quantidade de pecas do tamanho g:\n");
    scanf ("%d",&g);
    printf ("o valor arrecadado sera de %d reais",(p*a+m*b+g*c));
    return 0;
}
