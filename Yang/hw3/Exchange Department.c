#include <stdio.h>
int main (){
    int N,M,T;
    int Q;
    scanf("%d %d %d",&N,&M,&T);

    int L[N];
    for(int i=0; i<N; i++){
        scanf("%d",&L[i]);
    }

    int x[T],y[T];
    for(int i=0; i<T; i++){
        scanf("%d %d",&x[i],&y[i]);
    }

    for(int i=0; i<T; i++){
        int temp = L[x[i]-1];
        L[x[i]-1] = L[y[i]-1];
        L[y[i]-1] = temp;
    }

    scanf("%d",&Q);

    int ans[N],j=0;
    for(int i=0; i<N; i++){
        if(L[i] == Q){
            ans[j] = i+1;
            j++;
        }
    }

    for(int i=0; i<j; i++){
        printf("%d",ans[i]);
        if(i != j-1) printf(" ");
    }

    printf("\n");
    return 0;
}