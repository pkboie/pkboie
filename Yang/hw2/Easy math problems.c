#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y;
    double z;
    char c;

    scanf("%lf %c %lf",&x,&c,&y);
    if(c=='+')
    {
        z=x+y;
    }
    else if(c=='-')
    {
        z=x-y;
    }
    else if(c=='*')
    {
        z=x*y;
    }
    else if(c=='/')
    {
        z=x/y;
    }
    printf("%.3lf\n",z);
    return 0;
}

