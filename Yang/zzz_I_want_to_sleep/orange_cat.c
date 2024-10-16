#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n, ans = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        char strl[10001], strr[10001];
        int L[26], R[26];
        int flag = 1;
        memset(L, 0, sizeof(L));
        memset(R, 0, sizeof(R));

        scanf("%s %s", strl, strr);

        int lenl = strlen(strl);
        int lenr = strlen(strr);

        for(int i=0; i<lenl; i++){
            L[strl[i] - 'a']++;
        }

        for(int i=0; i<lenr; i++){
            R[strr[i] - 'a']++;
        }

        for(int i=0; i<26; i++){
            if(L[i] != R[i]){
                flag = 0;
            }
        }
        
        if(flag == 1){
            ans++;
        }

    }

    printf("%d\n", ans);
    return 0;

}