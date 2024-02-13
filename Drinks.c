
#include <stdio.h>

int main() {
   float n,sum=0;
   scanf("%f",&n);
   for(int i=0;i<n;i++){
       float x;
       scanf("%f",&x);
       sum+=x;
   }
   float y=sum/n;
  printf("%.12f",y);

    return 0;
}