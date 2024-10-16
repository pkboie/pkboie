#include <stdio.h>

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    int nu1, nu2;
    scanf("%d %d", &nu1, &nu2);

    int ans = gcd(nu1, nu2);
    printf("%d\n", ans);
    return 0 ;
}