#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,c,d,u;
    printf("digite um numero ate 3 digitos\n");
    scanf ("%d",&a);
    c=a/100;
    d=a/10 -c*10;
    u=a-(c*100+d*10);
    printf("a centena e %d , a dezena e %d e a unidade e %d ",c,d,u);
    return 0;
}
