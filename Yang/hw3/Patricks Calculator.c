#include <stdio.h>
#define max(i, j) (((i) > (j)) ? (i) : (j))

void reverse(int arr[], int len) {
    for (int i = 0; i < len / 2; i++) {    //len-1是最後一位
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}

void convert_commas(int arr[], int len, char result[]) {
    int pos = 0;
    for (int i = 0; i < len; i++) {
        result[pos++] = arr[i] + '0';
        if ((len - i - 1) % 3 == 0 && i != len - 1) {
            result[pos++] = ',';
        }
    }
    result[pos] = '\0';
}


int main(){
    char st1[200],st2[200];
    int num1[100],num2[100];
    int len1=0,len2=0;
    int final_num[100];
    char ans[200];
    scanf("%s", st1);
    scanf("%s", st2);

    for(int i=0,j=0; st1[i] != '\0'; i++){
        if(st1[i] != ','){
            num1[j] = st1[i] -'0'; 
            j++;
            len1++;
        }
    }

    for(int i=0,j=0; st2[i] != '\0'; i++){
        if(st2[i] != ','){
            num2[j] = st2[i] -'0';
            j++;
            len2++;
        }
    }

    reverse(num1, len1);
    reverse(num2, len2);

    int max_len = max(len1, len2);
    int carry=0;
    for(int i=0; i<max_len; i++){
        int sum = num1[i] + num2[i] + carry;
        final_num[i] = sum % 10;
        carry = sum / 10;
    }

    if(carry != 0){
        final_num[max_len] = carry;
        max_len++;
    }

    reverse(final_num, max_len);
    convert_commas(final_num, max_len, ans);

    printf("%s\n", ans);

    return 0;
}