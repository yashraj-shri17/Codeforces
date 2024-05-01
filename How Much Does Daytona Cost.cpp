// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for (int j =0;j<t;j++){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i = 0; i< n ; i++){
        cin>>v[i];
    }
   auto it = std::find(v.begin(), v.end(),m);
    if (it != v.end()) {
        std::cout <<"YES" << std::endl;
    } else {
        std::cout <<"NO" << std::endl;
    }
}
    return 0;
}