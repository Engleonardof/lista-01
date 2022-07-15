#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float q,p,h;
    q=0.1;
    p=0.05;
    h=0.1;
    printf("informe a quantidade de sanduiches a fazer\n");
    scanf ("%d",&n);
    printf("a lista de compras e %3.2f quilos de queijo \n %3.2f quilos de presunto \n %3.2f quilos de hamburguer", n*q, n*p, n*h);

    return 0;
}
