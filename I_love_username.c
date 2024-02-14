
#include <stdio.h>

int main() {
   int n,count,count1=0,count2=0;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   int max=arr[0],min=arr[0];
   for(int i=1;i<n;i++){
       if(max<arr[i]){
           max=arr[i];
           count1++;
       }
   }
      for(int i=1;i<n;i++){
       if(min>arr[i]){
           min=arr[i];
           count2++;
       }
   }
   count=count1+count2;
   printf("%d",count);
    return 0;
}