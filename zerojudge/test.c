#include <stdio.h>

int main() {
    int nu;
    while (scanf("%d", &nu) != EOF) {
        if ((nu % 4 == 0 && nu % 100 != 0) || nu % 400 == 0) 
            printf("閏年\n");
        else 
            printf("平年\n");
    }
    return 0;
}
