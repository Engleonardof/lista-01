#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia,mes;
    printf("informe o dia do mes \n");
    scanf ("%d",&dia);
    printf("informe o mes \n");
    scanf ("%d",&mes);
    printf ("o numeros de dias desse ano e: %d", ((mes*30)-(30-dia)));
    return 0;
}
