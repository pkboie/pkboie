#include <stdio.h>
int main(){
    int n,m;
    
    scanf("%d", &n);

    int e[n+1];
    long long prefix[n+1];
    prefix[0] = 0;

    for(int i=1; i<=n; i++){
        scanf("%d", &e[i]);
        prefix[i] = prefix[i-1] + e[i];
    }

    scanf("%d", &m);

    for(int i=0; i<m; i++){
        int L,R;
        scanf("%d %d", &L, &R);
        long long result = prefix[R] - prefix[L-1];
        printf("%lld", result);
        printf("\n");
    }
    return 0;
}