#include <stdio.h>

void to_binary(unsigned long n){
    int r;
    r = n % 2;
    if(n / 2 >= 1) to_binary(n / 2);
    printf("%d", r);
}

int main(){
    int nu;
    scanf("%d", &nu);
    to_binary(nu);
    printf("\n");
    return 0;
}