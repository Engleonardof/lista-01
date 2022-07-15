#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p;
    printf("informe seu peso\n");
    scanf("%f",&p);
    printf ("se aumentar 15%% de peso seu novo peso sera de %.2f kilos \n e se emagrecer 20%% sera de %.2f kilos", p*1.15,p*0.8);
    return 0;
}
