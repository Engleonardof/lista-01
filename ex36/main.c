#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sm, s;
    printf("informe o valor do salario minimo\n");
    scanf("%f",&sm);
    printf("informe o valor do salario do funcionario\n");
    scanf("%f",&s);
    printf("o funcionario recebe %.2f salarios minimos", (s/sm));
    return 0;
}
