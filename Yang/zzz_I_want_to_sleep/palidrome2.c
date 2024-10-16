#include <stdio.h>
#include <string.h>

void reverse(char* c, int len){
    for(int i=0; i<len/2; i++){
        char temp = c[i];
        c[i] = c[len-1-i];
        c[len-1-i] = temp;
    }
}

int main(){
    char s[100001];
    char r[100001];

    while(scanf("%s", s) != EOF){
        int isplidrome = 1;

        int len = strlen(s);

        for(int i=0; i<len; i++){
            r[i] = s[i];
        }
        r[len] = '\0';

        reverse(s, len);

        for(int i=0; i<len; i++){
            if(r[i] != s[i]){
                isplidrome = 0;
                break;
            }
        }

        if(isplidrome == 1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }

    }

    return 0;
}
