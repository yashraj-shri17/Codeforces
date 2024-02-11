    #include<stdio.h>
    int main(){
    int t,n=0;
    scanf("%d",&t);
    int arr[t][2];
    for(int i=0;i<t;i++){
        for(int m=0;m<2;m++){
        scanf("%d",&arr[i][m]);
    }
    }
    for(int i=0;i<t;i++){
        if(((arr[i][0])%(arr[i][1]))>0){
            int r=arr[i][0]%arr[i][1];
            int x=arr[i][1]-r;
            printf("%d\n",x);
        }
        else{
            printf("%d\n",n);
        }
    }
    return 0;
}