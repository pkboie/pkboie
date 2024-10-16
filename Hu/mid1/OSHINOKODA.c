#include <stdio.h>
#include <string.h>

int main(){
    int t, n;
    scanf("%d %d", &t, &n);

    int grid[n][n];
    memset(grid, 0, sizeof(grid));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &grid[i][j]);
        }
    }

    for(int i=0, x, y; i<t; i++){
        scanf("%d %d", &x, &y);
        int sum = 0;

        for(int j=0; j<n; j++){
            sum += grid[x][j] + grid[j][y];
        }

        for(int j=i; j<n; j++){

            //右下角
            if(x+j < n-1 && y+j < n-1){
                sum += grid[x+j][y+j];
            }

            //左上角
            if(x-j >= 0 && y-j >= 0){
                sum += grid[x-j][y-j];
            }

            //右上角
            if(x-j >= 0 && y+j < n-1){
                sum += grid[x-j][y+j];
            }

            //左下角
            if(x+j < n-1 && y-j >= 0){
                sum += grid[x+j][y-j];
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}