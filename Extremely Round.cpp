#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        if(p<10){
            cout<<p<<endl;
        }else{
            int num = 0;
            int x = p;
            while(x!=0){
                num++;
                x/=10;
            }
            int total = 0;
            num--;
            total += 9*num;
            total += p/pow(10,num);
            cout<<total<<endl;

            
        }
    }
    return 0;
}