#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float c1,c2,c3,c4;
    printf("informe o primeiro cateto\n");
    scanf("%f",&c1);
     printf("informe o segundo cateto\n");
    scanf("%f",&c2);
    c3=c1*c1;
    c4=c2*c2;
    printf ("a hipotenusa e %.2f ",(sqrt(c3+c4)));
    return 0;
}
