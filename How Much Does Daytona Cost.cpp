// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    //scanning test cases
    cin>>t;
    for (int j =0;j<t;j++){
    int n,m;
    //scanning vector sizes
    cin>>n>>m;
    vector<int>v(n);
    for(int i = 0; i< n ; i++){
        cin>>v[i];
    }
   // to find a number
   auto it = std::find(v.begin(), v.end(),m);
    if (it != v.end()) {
        std::cout <<"YES" << std::endl;
    } else {
        std::cout <<"NO" << std::endl;
    }
}
    return 0;
}