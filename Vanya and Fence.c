#include<Stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]<=m){
            sum+=1;
        }
        else{
            sum+=2;
        }
    }
     printf("%d\n",sum);
     return 0;
}