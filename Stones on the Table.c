#include <stdio.h>
#include<string.h>
int main() {
int n;
scanf("%d",&n);
char str[n];
scanf("%s",str);
int cnt=0;
for(int i=1;i<n;++i){
    if(str[i]==str[i-1]){
        cnt++;
    }
}

printf("%d",cnt);
return 0;
}