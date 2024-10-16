#include <stdio.h>

int N,T,Q;
int x01,x02,y01,y02,p,c,tmp;
int M[100010];
int card[1010][100010];
int ans[1000010][2];

int main(){
    scanf("%d",&N);

    for(int i=1;i<=N;i++){
        scanf("%d",&M[i]);
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=M[i];j++){
            scanf("%d",&card[i][j]);
        }
    }

    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d %d",&x01,&y01,&x02,&y02);
        tmp = card[x01][y01];
        card[x01][y01] = card[x02][y02];
        card[x02][y02] = tmp;
    }

    scanf("%d",&Q);

    for(int i=1;i<=N;i++){
        for(int j=1;j<=M[i];j++){
            ans[card[i][j]][0] = i;
            ans[card[i][j]][1] = j;
        }
    }

    while(Q--){
        scanf("%d",&p);
        printf("%d %d\n",ans[p][0],ans[p][1]);
    }
    
}