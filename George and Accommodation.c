#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int count= 0 ;
    for(int i = 0;i<t;i++){
        int n,m;
        scanf("%d %d",&n,&m);
        if(m-2>=n){
            count++;
        }
    }
    printf("%d",count);
}
