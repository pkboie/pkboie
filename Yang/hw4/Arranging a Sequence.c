#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int arr[m], arr2[n+1];
    for (int i = 1; i <= n; i++) arr2[i] = 0;
    
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = m - 1; i >= 0; i--) {
        if (arr2[arr[i]] != 1) {
            printf("%d\n", arr[i]);
            arr2[arr[i]] = 1;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (arr2[i] == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

/*int main(){
    int n, m;
    
    scanf("%d %d",&n, &m);

    int rq[m];
    int nu[n];

    for(int i=0; i<m; i++){
        scanf("%d",&rq[i]);
    }

    for(int i=1; i<=n; i++){
        nu[i-1] = i;
    }

    int temp;
    int j=0;
    for(int i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(rq[i] == nu[j]){
                temp = nu[j];
                while(j>0){
                    nu[j] = nu[j-1];
                    j--;
                }
                nu[0] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        printf("%d", nu[i]);
        printf("\n");
    }

    return 0;
}*/