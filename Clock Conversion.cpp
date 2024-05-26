#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b; char c;
    cin >> a >> c >> b;
    string d = (a < 12 ? " AM" : " PM");
    a = (a % 12 ? a % 12 : 12);
    cout << (a < 10 ? "0" : "") << a << c << (b < 10 ? "0" : "") << b << d << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int e; cin >> e; for (int f = 1; f <= e; f++) {solve();}
    // solve();
}

