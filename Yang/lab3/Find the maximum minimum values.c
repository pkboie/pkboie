#include <stdio.h>

int main(){
    int n,m;

    scanf("%d %d", &n, &m);

    int nu[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &nu[i][j]);
        }
    }

    int maxvalue = nu[0][0];
    int minvalue = nu[0][0];
    int i1 = 0,j1 = 0;
    int i2 = 0,j2 = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(nu[i][j] > maxvalue){
                maxvalue = nu[i][j];
                i1 = i;
                j1 = j;
            }
            if(nu[i][j] < minvalue){
                minvalue = nu[i][j];
                i2 = i;
                j2 = j;
            }
        }
    }

    int ansvalue = abs(maxvalue - minvalue);
    int position = abs(i1 - i2) + abs(j1 - j2);

    printf("%d %d", position, ansvalue);

    return 0;

}