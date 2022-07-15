#include <stdio.h>
#include <stdlib.h>

int main()
{
   float f,g,h,i,j,k;
   int a,b,c,d,e,z;
   f=0.01;
   g=0.05;
   h=0.1;
   i=0.25;
   j=0.5;
   k=1;
    printf("quantas moedas de 1 centavo voce possui\n");
    scanf ("%d",&a);
    printf("quantas moedas de 5 centavos voce possui\n");
    scanf ("%d",&b);
    printf("quantas moedas de 10 centavos voce possui\n");
    scanf ("%d",&c);
    printf("quantas moedas de 25 centavos voce possui\n");
    scanf ("%d",&d);
    printf("quantas moedas de 50 centavo voce possui\n");
    scanf ("%d",&e);
    printf("quantas moedas de 1 real voce possui\n");
    scanf ("%d",&z);
    printf("a quantidade total de dinheiro e de %3.2f reais",f*a+g*b+h*c+i*d+j*e+z*k);
    return 0;
}
