#include <stdio.h> 
#define MAX_SIZE 1000005 
long long a[MAX_SIZE]={0}, b[MAX_SIZE]={0};

int main(){
    int t, n;
    scanf("%d %d ", &t, &n);
    for(int i=1; i <= n; i++){
        char c;
        scanf("%c", &c);
        a[i] = c - 'a';
        b[i] = a[i] - a[i-1];
    }
    for (int i=0; i < t; i++){
        int l, r, m;
        scanf("%d %d %d", &l, &r, &m);
        b[l] += m;
        b[r+1] -= m;
    }
    for (int i = 1; i <= n; i++){
        a[i] = a[i - 1] + b[i];   
        printf("%c", (char)('a' + (a[i] % 26 + 26) % 26));
    }
    printf("\n");

    return 0;
}



/*int main(){               this will lead to TLE try use different methods come on
    int t,n;

    scanf("%d %d", &t, &n);

    char str[n+1];

    scanf("%s", str);

    for(int i=0; i<t; i++){
        int l,r,m;

        scanf("%d %d %d", &l, &r, &m);

        m = m % 26;

        for(int j=l; j<=r; j++){
            str[j-1] = (str[j-1] - 'a' + m + 26) % 26 + 'a';
        }

    }
    printf("%s\n", str);
    return 0;
}*/