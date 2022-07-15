#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f;
    printf("digite a temperatura em celsius\n");
    scanf ("%f",&c);
    f=((c*1.8)+32);
    printf ("a temperatura em fahrenheit e %3.2f",f);
    return 0;
}
