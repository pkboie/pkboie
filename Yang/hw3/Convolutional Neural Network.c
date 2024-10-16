#include <stdio.h>

int main(){

    int T;
    scanf("%d",&T);

    for(int t=0; t<T; t++){
        int n,m,k;
        int ct=0;
        scanf("%d %d %d\n",&n,&m,&k);
        int A[n+1][n+1];
        int B[m+1][m+1];
        int C[n-m+1+1][n-m+1+1];
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                scanf("%d",&A[i][j]);
            }   
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                scanf("%d",&B[i][j]);
            }   
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n/2; j++){
                int temp = A[i][j];
                A[i][j] = A[i][n-1-j];
                A[i][n-1-j] = temp;
            }   
        }
            
        for(int i=0; i<(n-m+1); i++){
            for(int j=0; j<(n-m+1); j++){
                C[i][j] = 0;
                for(int x=0; x<m; x++){
                    for(int y=0; y<m; y++){
                        C[i][j] += A[i+x][j+y]*B[x][y];
                    }
                }
            }
        }
        
        for(int i=0; i<(n-m+1); i++){
            for(int j=0; j<(n-m+1); j++){
                if(C[i][j]>k){
                    ct++;
                }
            }
        }
        printf("%d\n",ct);  
    }
    return 0;
}