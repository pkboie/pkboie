#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[11];
    char y;
    scanf("%c %s",&y,x);


    if(y<='L')
    {
        printf("Bachelor\n");
    }
    else
    {
        printf("Master\n");
    }


    printf("%c\n",x[7]-'1'+'A');



    printf("%c%c%c\n",x[0],x[1],x[2]);


    if(x[8]>'0')
    {
        printf("%c%c\n",x[8],x[9]);
    }
    else
    {
        printf("%c\n",x[9]);
    }
    return 0;
}
