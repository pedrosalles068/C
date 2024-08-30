#include <stdio.h>

int main ()
{
int n,c,r;
    printf("\n Digite um numero entre 1 e 10");
    scanf("%d", &n);
    for (c = 1; c<= 10;c++)
    {
        r = n *c;
        printf("\n %d x %2d = %3d",n,c,r);
    }

   return 0;
}