#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int m;
    cin>>m;
    while(m--){
        string t;
        cin>>t;
        int n=t.size();
        bool flg=false;
        rep(i,n-1){
            if(t[i]!=t[i+1]){
                swap(t[i],t[i+1]);
                flg=true;
                break;
            }
        }
        if(flg){
            cout<<"YES\n";
            cout<<t<<"\n";
        }
        else cout<<"NO\n";
       
       
    }
    return 0;
}


