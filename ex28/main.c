#include <stdio.h>
#include <stdlib.h>

int main()
{
     float a,b,c;
    printf("me informe a primeira nota\n");
    scanf ("%f",&a);
    printf("me informe o segunda nota\n");
    scanf ("%f",&b);
    printf("a media ponderada e de %.2f \n",((a*2+b*3)/5));
    return 0;
}
