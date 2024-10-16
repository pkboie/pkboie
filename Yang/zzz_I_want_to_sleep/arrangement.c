#include <stdio.h>
#include <string.h>

int judgement[200001] = {0};
int number[100000];

int main(){
    int n, m, e;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < m; i++){
        scanf("%d", &e);
        number[i] = e;
        judgement[e] = 1;
    }

    for(int i = m - 1; i >= 0; i--){
        if(judgement[number[i]] == 1){
            printf("%d\n", number[i]);
            judgement[number[i]] = -1;
        }
    }

    for(int i = 1; i <= n; i++){
        if(judgement[i] == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}
