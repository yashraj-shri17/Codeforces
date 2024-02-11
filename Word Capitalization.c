// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    int x;
    char str[10000];
    scanf("%s",str);
   x=(int)str[0];
if (x>=65 && x<=90){
    puts(str);
}
else{
    x=x-32;
    str[0]=(char)x;
    puts(str);
    
}
    return 0;
}