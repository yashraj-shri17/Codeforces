// Online C compiler to run C program online
#include <stdio.h>
 
int main() {
        int n; 
//  initialising variable
        scanf("%d",&n); 
// scanning var
//checking if a number is divisible by a lucky number or not in range [1,n]

        if(n%4 == 0 || n%7==0 || n%44 == 0 || n%77==0 || n%47==0 || n%74==0 || n%474==0 || n%447==0 || n%744==0 || n%774==0 || n%747==0 || n%747==0 || n%477==0 ){
            printf("YES");
        }
        else{
            printf("NO");
        }
 
    return 0;
}
