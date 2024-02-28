// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
    for(int i=0;i<n;i++){
            if(arr[i]<0){
                arr[i]=-1*arr[i];
            }
    }
    int sum = 0;
    for(int i=0;i<n;i++){
         sum+=arr[i];   
        }
        printf("%d\n",sum);
    }
    return 0;
}