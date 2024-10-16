#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
int n, m;

    // (x1, y1) means the upper left coordinate
    // (x2, y2) means the lower right coordinate
    for (int x1 = 0; x1 < n; x1++) {
        for (int y1 = 0; y1 < m; y1++) {
            for (int x2 = x1; x2 < n; x2++) {
                for (int y2 = y1; y2 < m; y2++) {
                    // your code ...
                }
            }
        }
    }

    
}