#include <stdio.h>
#include <string.h>

void reverse(char arr[], int len) {
    for (int i = 0; i < len / 2; i++) {
        char temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}

int main(void) {
    char str[100001];
    
    while (scanf("%s", str) != EOF) {
        int len = strlen(str);
        char original[100001];
        strcpy(original, str);
        
        reverse(str, len);

        if (strcmp(original, str) == 0) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;

}