#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,a;
    float f,t;
    printf("coloque o valor total da conta\n");
    scanf ("%f", &t);
    a=t/3;
    c=t/3;
    f=(t-(a+c));
    printf("a parte do carols e %d, do andre e %d e do felipe e %f",c,a,f);
    return 0;
}
