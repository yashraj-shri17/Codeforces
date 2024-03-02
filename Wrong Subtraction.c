#include <stdio.h>

int main() {
    int n,t;
    scanf("%d %d",&n,&t);
    while(t-- && t>=0){
        if(n%10!=0){
            n=n-1;
        }
        else{
            n=n/10;
        }
    }
    printf("%d",n);
    return 0;
}