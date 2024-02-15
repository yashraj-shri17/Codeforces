// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i  = 0;i<t;i++){
        int n;
        scanf("%d",&n);
        if(n<=26){
           if(n==3){
               printf("aaa\n");
           }
           else{
               int x=n-2-1+97;
               char z=(char)x;
               printf("aa%c\n",z);
           }
        }
        else if(n>52){
           int x=n+97-52-1;
           char z=(char)x;
           printf("%czz\n",z);
        }
        else if(n==27){
            printf("aay\n");
        }
        else{
            int x=n-26+96-1;
           char z=(char)x;
           printf("a%cz\n",z);
        }
    }
    return 0;
}