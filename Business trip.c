#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);

    int arr[12];
    for(int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 12 - 1; i++) {
        for(int j = i + 1; j < 12; j++) {
            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int total_arr = 0;
    int months_arr = 0;
    if(k!=0){
    for(int i = 0; i < 12; i++) {
        total_arr += arr[i];
        if(total_arr >= k) {
            months_arr = i + 1;
            break;
        }
    }
        if(months_arr > 0) {
        printf("%d\n", months_arr);
    } else {
        printf("-1\n");
    }
    }
    else{
        printf("0\n");
    }


    return 0;
}
