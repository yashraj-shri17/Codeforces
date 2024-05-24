#include <bits/stdc++.h>
using ll = signed long long int;
using namespace std;

void solve() {
    ll size, x, y;
    cin >> size >> x >> y;
    ll answer = size * x;
    if (y < 2 * x) {
        answer = (size / 2) * y + (size % 2) * x;
    }
    cout << answer << '\n';
}

int main() {
    int num_tests;
    cin >> num_tests;
    while (num_tests--) {
        solve();
    }
}

