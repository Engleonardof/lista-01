#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int xa,ya,xb,yb;
    float distancia;
    printf ("informe o x do primeiro ponto \n ");
    scanf ("%d",&xa);
    printf ("informe o y do primeiro ponto \n ");
    scanf ("%d",&ya);
    printf ("informe o x do segundo ponto \n ");
    scanf ("%d",&xb);
    printf ("informe o y do segundo ponto \n ");
    scanf ("%d",&yb);
    distancia = sqrt((pow((xb-xa),2)+ (pow((yb-ya),2) )));
                printf ("a distancia dos pontos e: %3.2f", distancia);

    return 0;
}
