#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   char str[n];
    scanf("%s",str);
   int count_A=0,count_D=0;
   for (int i = 0;i<n;i++){
       if(str[i]=='A'){
           count_A+=1;
       }
       else{
           count_D+=1;
       }
   }
   if(count_A>count_D){
       printf("Anton");
   }
   else if(count_A<count_D){
       printf("Danik");
   }
   else{
       printf("Friendship");
   }
    return 0;
}