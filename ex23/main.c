#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mh,ms,sp,tp;
    printf("qual e sua altura\n");
    scanf("%f",&mh);
    printf("comprimento da sua sombra \n");
    scanf("%f",&ms);
    printf ("comprimento da sombra do predio \n");
    scanf("%f",&sp);
    tp=((sp*mh)/ms);
    printf("a altura do predio e de %5.2f metros",tp);
    return 0;
}
