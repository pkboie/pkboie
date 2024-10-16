#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    int cnt = 0;
    char ch, prev;
    while((ch = getchar()) != EOF){

        if(ch != '\''){
            cnt++;
        }

        if(cnt == 1){
            if(!isdigital(ch)){
                printf("Domo cannot crack this computer");
            }
        }
        if(cnt == 2){

            cnt = 0;
        }

        //reset a new line
        if(ch == '\n'){
            cnt = 0;
        }

        prev = ch;
    }
}