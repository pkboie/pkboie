#include <stdio.h>
#include <string.h>

int main(){
    int image[1024][1024], kernel[10][10], pad[1044][1044];
    int h_image, w_image, h_kernel, w_kernel, stride, padding;
    scanf("%d %d", &h_image, &w_image);

    for(int i=0; i<h_image; i++){
        for(int j=0; j<w_image; j++){
            scanf("%d", &image[i][j]);
        }
    }

    scanf("%d %d", &h_kernel, &w_kernel);

    for(int i=0; i<h_kernel; i++){
        for(int j=0; j<w_kernel; j++){
            scanf("%d", &kernel[i][j]);
        }
    }

    scanf("%d %d", &stride, &padding);

    memset(pad, 0, sizeof(pad));
    for(int i=0; i<h_image; i++){
        for(int j=0; j<w_image; j++){
            pad[i + padding][j+ padding] = image[i][j];
        }
    }
    
    int h_pad = h_image + 2*padding;
    int w_pad = w_image + 2*padding;
    
    int h_map = (h_pad - h_kernel)/stride + 1;
    int w_map = (w_pad - w_kernel)/stride + 1;
    int map[h_map][w_map];
    memset(map, 0, sizeof(map));

    for(int i=0; i<h_map; i++){
        for(int j=0; j<w_map; j++){
            for(int x=0; x<h_kernel; x++){
                for(int y=0; y<w_kernel; y++){
                        map[i][j] += pad[i*stride+x][j*stride+y]*kernel[x][y];
                }
            }
        }
    }

    for(int i=0; i<h_map; i++){
        for(int j=0; j<w_map; j++){
            if(j != w_map - 1) printf("%d ", map[i][j]);
            else printf("%d\n", map[i][j]);
        }
    }

    return 0;
}