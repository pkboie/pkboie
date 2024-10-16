#include <stdio.h>
#include <string.h>

int main() {
    int n, m, k;
    scanf("%d", &n);
    char A[10005], B[10005];
    int cnt[150];
    int ans[10005];
    for (int i = 0; i < n; i++) {
        scanf("%s %s", A, B);
        int al = strlen(A);
        int bl = strlen(B);

        int now = 0;

        for (int j = 0; j < 150; j++)
            cnt[j] = 0;
        for (int j = 0; j < al; j++)
            cnt[A[j]]++;
        for (int k = 0; k < bl; k++) {
            if (cnt[B[k]] > 0) {
                cnt[B[k]]--;
                ans[now++] = k;
            }
        }

        if (now != al) {
            printf("baganono\n");
        }
        else {
            for (int j = 0; j < al; j++) {
                printf("%d", ans[j] + 1);
                if (j != al - 1) {
                    printf(" ");
                }
                else {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}
