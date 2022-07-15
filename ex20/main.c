#include <stdio.h>
#include <stdlib.h>

int main()
{
    float novelos;
    int blusas;
    printf("quantos novelos gasta para produzir uma blusa de la\n");
    scanf("%f",&novelos);
    printf ("quantas blusas foram produzidas \n");
    scanf ("%d",&blusas);
    printf ("a quantidade de novelos gastos foram de %3.2f",blusas*novelos);
    return 0;
}
