#include <stdio.h>
#include <string.h>
#include <limits.h>

void reverse_str(char* str, int len){
    for(int i=0; i<len/2; i++){
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

void reverse_num(long long* num, int len){
    for(int i=0; i<len/2; i++){
        long long temp = num[i];
        num[i] = num[len - 1];
        num[len - 1] = temp;
    }
}

int main(){
    char str1[101], str2[101];
    long long* num1;
    long long* num2;
    scanf("%s %s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    reverse_str(str1, len1);
    reverse_str(str2, len2);

    for(int i=0, j=0; i<len1; i++){
        if(str1[i] != ','){
            num1[j++] = (int)(str1[i]);
        }
    }

    for(int i=0, j=0; i<len2; i++){
        if(str2[i] != ','){
            num2[j++] = (int)(str2[i]);
        }
    }

    long long* num = num1 + num2[9];

    char* str = (char)(num);

    int len = strlen(str);

    char* ans;

    int clock = 0;

    for(int i=0, j=0; i<len; i++){
        if(clock % 3 == 0){
            ans[j++] = ',';
        }
        else{
            ans[j++] = str[i];
        }
    }

    int final_len = strlen(ans);

    reverse(ans, final_len);

    for(int i=0; i<final_len; i++){
        printf("%c", ans[i]);
    }

    return 0;   
}