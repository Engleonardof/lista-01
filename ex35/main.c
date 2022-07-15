#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dm,d;
    printf("me informe o valor da diagonal maior do lozango\n");
    scanf("%f",&dm);
    printf("me informe o valor da diagonal menor  do lozango\n");
    scanf("%f",&d);
    printf("a area do seu trapezio e de %.2f", (((dm*d)/2)));
    return 0;
}
