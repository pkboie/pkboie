#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    char str1[10001], str2[10001];
    int cnt[150], ans[10001];
    for(int i=0; i<n; i++){
        scanf("%s %s", str1, str2);
        memset(cnt, 0, sizeof(cnt));
        memset(ans, 0, sizeof(ans));

        int now = 0;

        int len1 = strlen(str1);
        int len2 = strlen(str2);

        for(int j=0; j<len1; j++){
            cnt[str1[j]]++;
        }

        for(int j=0; j<len2; j++){
            if(cnt[str2[j]] > 0){
                cnt[str2[j]]--;
                ans[now++] = j;
            }
        }

        if(now != len1){
            printf("baganono\n");
        }
        else{
            for(int j=0; j<len1; j++){
                printf("%d", ans[j] + 1);
                if(j != len1 - 1){
                    printf(" ");
                }
                else{
                    printf("\n");
                }
            }
        }

    }

    return 0;
}