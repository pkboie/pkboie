#include <stdio.h>
#include <string.h>

int main(){
    char str[1000001];
    int cnt[126] = {0};
    char arrange[1000001]={'\0'};
    
    scanf("%s", str);

    int len = strlen(str);

    //有哪些字
    for(int i=0; i<len; i++){
        cnt[str[i]] = 1;
    }

    //由小到大有哪些字
    for(int i=0,j=0; i<126; i++){
        if(cnt[i] == 1){
            arrange[j++] = i;
        }
    }

    for(int i=0; arrange[i] != '\0'; i++){
        int pos[1000001] = {0};
        int now = 0;
        char ch = arrange[i];
        for(int j=0; j<len; j++){
            if(ch == str[j]){
                pos[now++] = j+1;
            }
        }

        printf("%c:", ch);

        for(int j=0; pos[j] != 0; j++){
            printf(" %d", pos[j]-1);
        }

        printf("\n");
    }

    return 0;
}