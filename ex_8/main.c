#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3;
    printf("insira a nota 1\n");
    scanf ("%f",&n1);
    printf("insira a nota 2\n");
    scanf ("%f",&n2);
    printf("insira a nota 3\n");
    scanf ("%f",&n3);
    printf ("a media do aluno e %3.2f", (n1+2*n2+3*n3)/6);
    return 0;
}
