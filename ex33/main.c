#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bm,b,h;
    printf("me informe o valor da base maior do trapezio\n");
    scanf("%f",&bm);
    printf("me informe o valor da base menor  do trapezio\n");
    scanf("%f",&b);
    printf("me informe o valor da base altura do trapezio\n");
    scanf("%f",&h);
    printf("a area do seu trapezio e de %.2f", (((bm+b)*h)/2));
    return 0;
}
