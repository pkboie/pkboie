#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    
    int nu[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &nu[i]);
    }
    
    long long prefix[n + 1];
    prefix[0] = 0;
    for(int i = 1; i <= n; i++){
        prefix[i] = prefix[i - 1] + nu[i - 1];
    }
    
    int m;

    scanf("%d", &m);

    for(int i = 0; i < m; i++){
        int l,r;
        long long ans;
        scanf("%d %d", &l, &r);
        ans = prefix[r] - prefix[l - 1];
        printf("%lld\n", ans);
    }

    return 0;
    
}