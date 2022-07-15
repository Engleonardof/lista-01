#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lata,pet,litro;
    lata=0.350;
    pet=0.6;
    litro=2;
    int a,b,c;
    printf("quantas latas foram compradas\n");
    scanf("%d",&a);
    printf("quantas garrafas de 600 foram compradas\n");
    scanf("%d",&b);
    printf("quantas garrafas de 2 litros foram compradas\n");
    scanf("%d",&c);
    printf ("a quantidade total de litros comprado foi de %3.2f",lata*a+pet*b+litro*c);
    return 0;
}
