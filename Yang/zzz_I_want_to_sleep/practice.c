#include <stdio.h>

int number[1000];
int sequence[2000]={0};

int main(){
    int n, m, e;
    scanf("%d %d", &n, &m);

    for(int i=0; i<m; i++){
        scanf("%d", &e);
        number[i] = e;
        sequence[e] = 1;
    }

    for(int i=m-1; i>=0; i++){
        if(sequence[number[i]] == 1){
            printf("%d\n", number[i]);
            sequence[number[i]] = -1;
        }
    }

    for(int i=1; i<=n; i++){
        if(sequence[i] == 0){
            printf("%d\n", i);
        }
    }

}