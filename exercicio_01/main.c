#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    printf("ola, nos da imobiliaria Imobilis vamos passar a area do seu terreno, me informe o comprimento dele do lado maior \n");
    scanf ("%f",&a);
    printf("Me informe o comprimento do lado menor agora \n");
    scanf ("%f",&b);
    printf("A area do seu terreno e %3.2f \n", a*b);
    return 0;
}
