#include <stdio.h>
int main() {
    int n,times;
    scanf("%d %d",&n,&times);
    char str[n];
    scanf("%s",&str);
    for(int i=0;i<times;i++){
        for(int j=0;j<n;j++){
            if(str[j]=='B' && str[j+1]=='G'){
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
                j++;
            }
        }
    }
    printf("%s",str);
    return 0;
}