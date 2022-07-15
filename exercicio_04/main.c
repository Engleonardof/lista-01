#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int b,c;
    c=365;
    printf("me informe a inicial do seu nome \n");
    scanf("%c",&a);
    printf("me informe a sua idade\n");
    scanf("%d",&b);
    printf("voce ja viveu %d dias \n",c*b);
    return 0;
}
