#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, atual,a;
    printf("informe o ano de nascimento\n");
    scanf("%d",&ano);
    printf("informe o ano atual \n");
    scanf("%d",&atual);
    a=atual-ano;
    printf ("tem %d anos ou %d meses ou %d dias ou %d semanas",a,a*12,a*365,a*54);
    return 0;
}
