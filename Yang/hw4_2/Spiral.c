#include <stdio.h>

void spiral_maker(int nu){
    int x=0, y=-1;  //default => (0,-1) since (0,0) also need to be use
    int derection[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int div = 0;    //default => right
    int step = nu;
    char grid[nu][nu];

    for(int i=0; i<nu; i++){
        for(int j=0; j<nu; j++){
            grid[i][j] = ' ';
        }
    }

    //grid[x][y] = '#';

    while(step > 0){
        for(int i=0; i<step; i++){
            x += derection[div][0];     //up & down
            y += derection[div][1];     //right & left
            grid[x][y] = '#';
        }
        div = (div +1) % 4;
        step--;
    }

    for(int i=0; i<nu; i++){
        for(int j=0; j<nu; j++){
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;

    scanf("%d", &n);

    int input;
    for(int i=0; i<n; i++){
        scanf("%d", &input);

        spiral_maker(input);

    }

    return 0;

}