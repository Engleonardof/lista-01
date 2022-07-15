#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pao,broa;
    float a,b;
    a=0.12;
    b=1.5;

    printf("para saber os resultados me informe a quantidade de paes vendidos \n");
    scanf("%d",&pao);
    printf("agora quantidade de broas vendidas\n");
    scanf("%d",&broa);

    printf("o valor total arrecadado foi %3.2f \n", (a*pao+b*broa));
    printf ("o valor que deve ser guardado e: %3.2f ", (a*pao+b*broa)*0.1);
    return 0;
}
