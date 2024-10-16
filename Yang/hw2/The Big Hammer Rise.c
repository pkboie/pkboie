#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    int x,y,z;
    scanf("%d.%d %d.%d",&a,&b,&c,&d);
    x=100*a+b;
    y=100*c+d;
    z=x*y;

    printf("%d.%04d\n", z/10000, z%10000);
    return 0;
}

