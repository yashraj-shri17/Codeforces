#include <bits/stdc++.h>
using namespace std;
int main(){
    // test_cases
    int t;
    cin>>t;
    while(t--){
        // scan variables
        int a,b;
        cin>>a>>b;
        int arr[a];
        // loop for test_cases
        for(int i = 0;i < a;i++){
            cin>>arr[i];
        }
        if(is_sorted(arr,arr+a) || b > 1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}