#include <stdio.h>
#include <string.h>

void spiral_maker(int n){
    int x = 0, y = -1;
    int direction[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int div = 0;
    char spiral[n][n];
    int step = n;
    memset(spiral, ' ', sizeof(spiral));

    while(step){
        for(int i=0; i<step; i++){
            y += direction[div][1];
            x += direction[div][0];
            spiral[x][y] = '#';
        }

        div = (div + 1) % 4;
        step--;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%c", spiral[i][j]);
        }
        printf("\n");
    }

}

int main(){
    int t, n;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d", &n);

        spiral_maker(n);
    }

    return 0;
}