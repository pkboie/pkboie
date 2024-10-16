#include <stdio.h>

int f(int n, int k){
    if(n == k) return 1;
    else if(k > n) return 0;
    else if(k == 1) return 1;

    return f(n-1, k-1) + k*f(n-1, k);
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    int ans = f(n, k);
    printf("%d\n", ans);
    return 0;
}