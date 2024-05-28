#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a;
    cin >> a;
    for (int b = 0; b < 2 * a; b++) {
        for (int c = 0; c < 2 * a; c++) {
            cout << (b / 2 + c / 2 & 1 ? '.' : '#');
        }
        cout << '\n';
    }   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int d; cin >> d;
    
    for (int e = 1; e <= d; e++) {
        solve();
        
    }
}

