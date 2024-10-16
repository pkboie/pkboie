#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX_SIZE 1000001
long long A[MAX_SIZE] = {0}, B[MAX_SIZE] = {0};

int main(){
    int t, n;
    scanf("%d %d", &t, &n);

    for (int i = 1; i <= n; i++) {
        char c;
        scanf(" %c", &c);
        A[i] = c - 'a';
        B[i] = A[i] - A[i - 1];    
    }

    for (int i = 0; i < t; i++) {
        int l, r, shift;
        scanf("%d %d %d", &l, &r, &shift);
        B[l] += shift;
        B[r + 1] -= shift;
    }

    for (int i = 1; i <= n; i++) {
        A[i] = B[i] + A[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        printf("%c", (char)('a' + (A[i] % 26 + 26) % 26));
    }
    printf("\n");

    return 0;
}
