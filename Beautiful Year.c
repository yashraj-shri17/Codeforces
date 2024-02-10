#include <stdio.h>

int main() {
    
   int n,x,x1,x2,x3,x4;
   
   scanf("%d",&n);
   x=n+1;
for(int i=0;i!=n;i++){
   x1=((x)/1000)%10;
   x2=((x)/100)%10;
   x3=((x)/10)%10;
   x4=(x)%10;
 
   if(x1==x2 || x2==x3 || x3==x4 || x4==x1||x2==x4||x1==x3){
       x++;
   }
   else{
        printf("%d",x);
     break;
   }
  
    }
  
    return 0;
}