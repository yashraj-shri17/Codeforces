#include <bits/stdc++.h>
using namespace std;
 int main(){
     int n , m,ans=0;
     cin>>n>>m;
     while(n<=m){
         n=n*3;
         m=m*2;
         ans=ans+1;
     }
     cout<<ans;
 }