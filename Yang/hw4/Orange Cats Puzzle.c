#include <stdio.h>
#include <string.h>
int main(){
    int n;
    int arr[26],brr[26];
    char p1[10001],p2[10001];
    int i,j;
    int ans = 0;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s %s", p1, p2);

        for(int l=0; l<26; l++){
            arr[l] = 0;
            brr[l] = 0;
        }

        for(j=0; p1[j] != '\0'; j++){
            arr[p1[j] - 'a']++;
        }

        for(j=0; p2[j] != '\0'; j++){
            brr[p2[j] - 'a']++;
        }

        int match = 1;
        for(int i=0; i<26; i++){
            if(arr[i] != brr[i]){
                match = 0;
            }
        if(match){
            ans++;
        }
    }
    
    printf("%d\n", ans);
    return 0;

}