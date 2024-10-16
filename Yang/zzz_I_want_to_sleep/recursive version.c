#include <stdio.h>

// recursive version "n! = n * (n-1)!"
long rfact(int n){
    long ans;
    if(n > 0){
        ans = n * rfact(n -1);
    }
    else{
        ans = 1;
    }
    return ans;
}

int main(){
    int nu;
    scanf("%d", &nu);
    printf("%ld", rfact(nu));
    return 0;
}