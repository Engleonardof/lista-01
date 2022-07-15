#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,e,br,l;
    int a,b;
    a=10;
    b=15;
    printf("quantas horas o funcionario trabalhou no periodo normal \n");
    scanf ("%f", &h);
    printf("quantas horas extras o funcionario trabalhou \n");
    scanf ("%f",&e);
    br=(h*a+e*b);
    l=((h*a+e*b)*0.9);
    printf ("o salario bruto e de %3.2f, \n e o salario liquido e %3.2f",br,l);
    return 0;
}
