#include <bits/stdc++.h>
using namespace std;

//yashraj shrivastava
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        int count = 0;
        for(int j = 0; j < s.size();) {
            if((s[j]=='0' && s[j+1]=='1') || (s[j]=='1' && s[j+1]=='0') ){
                count++;
                s.erase(j, 2);
                j = max(0, j - 1);
            } else {
                j++;
            }
        }
        if(count % 2 == 0){
            cout << "NET" << endl;
        }
        else{
            cout << "DA" << endl;
        }
    }
    return 0;
}
