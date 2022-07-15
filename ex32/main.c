#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k;
    printf("informe seu peso em quilos\n");
    scanf("%f",&k);
    printf("seu peso em gramas seria de %.0f gramas", k*1000);
    return 0;
}
