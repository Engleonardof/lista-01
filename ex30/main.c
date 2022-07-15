#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s,v,c,sf;
    printf("informe o salario fixo do funcionario\n");
    scanf("%f",&s);
    printf ("informe a quantidade de vendas \n");
    scanf ("%f", &v);
    c=v*0.04;
    sf=c+s;
    printf("a comissao foi de %.2f reais, e o salario final de %.2f reais",c,sf);
    return 0;
}
