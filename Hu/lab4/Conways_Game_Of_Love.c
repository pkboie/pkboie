#include <stdio.h>

int flower_fate(int quantity, int original){
    if(quantity == 0 || quantity == 1){
        return 0;
    }
    else if(quantity == 2){
        return original;
    }
    else if(quantity == 3){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int h, w;
    scanf("%d %d", &h, &w);

    int grid[h][w];
    int quantity[h][w];

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            scanf("%d", &grid[i][j]);
            quantity[i][j] = 0;
        }
    }

    int directions[8][2] = {
        {-1, -1},  {-1, 0}, {-1, 1},  // 左上、上、右上
        {0, -1},            {0, 1},   // 左、右
        {1, -1},   {1, 0},  {1, 1}    // 左下、下、右下
    };

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            for (int d = 0; d < 8; d++) {
                int ni = i + directions[d][0];  
                int nj = j + directions[d][1];  
                if (ni >= 0 && ni < h && nj >= 0 && nj < w) {
                    quantity[i][j] += grid[ni][nj];
                }
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            quantity[i][j] = flower_fate(quantity[i][j], grid[i][j]);
            printf("%d ", quantity[i][j]);
        }
        printf("\n");
    }

    return 0;
}




/*void flower_fate(int quantity, int original){     //我只是想問為甚麼這個函數不會回傳給quantity 但我之前寫的reverse會
    if(quantity == 0 || quantity == 1){
        quantity = 0;
    }
    else if(quantity == 2){
        quantity = original;
    }
    else if(quantity == 3){
        quantity = 1;
    }
    else{
        quantity = 0;
    }
}

flower_fate(quantity[i][j], grid[i][j]);*/


/*int main(){
    int h, w;
    scanf("%d %d", &h, &w);

    int grid[h][w];
    int quntity[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            scanf("%d", &grid[i][j]);

            quntity[i][j] = 0;
        }
    }

    //corner (0,0)
    if(grid[0][1] == 1){
        quntity[0][0]++;
    }
    else if(grid[1][0]){
        quntity[0][0]++;
    }
    else if(grid[1][1]){
        quntity[0][0]++;
    }
    //(0,w-1)
    if(grid[0][w-2] == 1){
        quntity[0][w-1]++;
    }
    else if(grid[1][w-1]){
        quntity[0][w-1]++;
    }
    else if(grid[1][w-2]){
        quntity[0][w-1]++;
    }
    //(h-1,0)
    if(grid[h-1][1] == 1){
        quntity[h-1][0]++;
    }
    else if(grid[h-2][0]){
        quntity[h-1][0]++;
    }
    else if(grid[h-2][1]){
        quntity[h-1][0]++;
    }
    //(h-1,w-1)
    if(grid[h-1][w-2] == 1){
        quntity[h-1][w-1]++;
    }
    else if(grid[h-2][w-1]){
        quntity[h-1][w-1]++;
    }
    else if(grid[h-2][w-2]){
        quntity[h-1][w-1]++;
    }

    //edges left
    for(int i = 1, j = 0; i <= w - 2; i++){
        if(grid[i - 1][0] == 1){
            quntity[i][0]++;
        }
        else if(grid[i - 1][1] == 1){
            quntity[i][0]++;
        }
        else if(grid[i][1] == 1){
            quntity[i][0]++;
        }
        else if(grid[i + 1][0] == 1){
            quntity[i][0]++;
        }
        else if(grid[i + 1][1] == 1){
            quntity[i][0]++;
        }
    }
}*/