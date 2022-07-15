#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total,a,s;
    printf("quantos litros de refresco quer fazer\n");
    scanf("%f",&total);
    a=((total/10)*8);
    s=((total/10)*2);
    printf ("a quantidade necessaria de agua e de %3.2f litros \n e de suco e de %3.2f litros",a,s);
    return 0;
}
