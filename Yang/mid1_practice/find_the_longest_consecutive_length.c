#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c, prev = '\0';
    int max = 0, num = 0, flag = 0;
    while((c = getchar()) != '\n'){
        c = toupper(c);
        
        //除了第一個字
        if(flag == 1){
            if(c != prev){
                num = 1;
            }
            else{
                num++;
            }
        }
        //第一個字
        if(flag == 0){
            num++;
        }

        if(num > max){
            max = num;
        }

        prev = c;
        flag = 1;
    }

    printf("%d\n", max);

    return 0;
}