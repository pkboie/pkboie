#include <stdio.h>
#include <string.h>

void reverse(char* str, int len){
    for(int i = 0; i < len/2; i++){
        int temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1- i] = temp;
    }
    
}

int main(){
    char str[100001];
    char oringinal[100001];
    while(scanf("%s", str) != EOF){
        strcpy(oringinal, str);

        int len = strlen(str);
        reverse(str, len);

        if(strcmp(oringinal, str) == 0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }    
    
    return 0;

}