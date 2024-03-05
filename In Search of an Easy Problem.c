#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count_0=0;
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(arr[i]==0){
            count_0++;
        }
    }
    if(count_0==n){
        printf("EASY");
    }
    else{
        printf("HARD");
    }
    return 0;
}