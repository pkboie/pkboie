#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[6];
    char b[6];
    char c[6];
    char d[6];
    int gap='a'-'A';
    int encrypt[5];
    int i=0;
    int n=5;
    scanf("%s/n",a);
    scanf("%s/n",b);
    scanf("%s",c);


    while(i<=n){
            if(b[i]<96)
            {
                b[i]=b[i];
            }
            else
            {
                b[i]=b[i]-gap;
            }
            if(a[i]<96)
            {
                a[i]=a[i];
            }
            else
            {
                a[i]=a[i]-gap;
            }
        encrypt[i]=b[i]-a[i];
        if(c[i]<96)
        {
            if(encrypt[i]>=0)
            {
                d[i]=(c[i]-'A'+encrypt[i])%26+'a';
            }
            else
            {
                encrypt[i]=encrypt[i]+26;
                d[i]=(c[i]-'A'+encrypt[i])%26+'a';
            }
        }
        else
        {
            if(encrypt[i]>=0)
            {
                d[i]=(c[i]-'a'+encrypt[i])%26+'A';
            }
            else
            {
                encrypt[i]=encrypt[i]+26;
                d[i]=(c[i]-'a'+encrypt[i])%26+'A';
            }
        }
        i++;
        }
        printf("%c%c%c%c%c\n",d[0],d[1],d[2],d[3],d[4]);
        return 0;
}
