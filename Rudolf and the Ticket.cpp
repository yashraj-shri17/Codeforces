#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t; 
 
    for (int i = 0; i < t; i++) {
        int a,b, c;
        cin >> a >> b >> c;
 
        int lp[a], rp[b];
        
        for (int j = 0; j < a; j++) {
            cin >> lp[j];
        }
        
        for (int j = 0; j < b; j++) {
            cin >> rp[j];
        }
        
        int count = 0;
        for (int x = 0; x < a; x++) {
            for (int y = 0; y < b; y++) {
                if (lp[x] + rp[y] <= c) {
                    count++;
                }
            }
        }
        
        cout << count << endl;
    }
 
    return 0;
}