#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("informe o preco atual do produto\n");
    scanf("%f",&a);
    b=a*1.1;
    printf("o novo preco sera de %.2f reais",b);
    return 0;
}
