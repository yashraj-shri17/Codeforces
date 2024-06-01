#include <bits/stdc++.h>
 
using namespace std;
 
#define all(x) (x).begin(), (x).end()
 
using ll = signed long long int;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
 
void solve() {
    int size;
    ll c, d;
    cin >> size >> c >> d;
    vl a(size * size);
    for (int i = 0; i < size * size; ++i) {
        cin >> a[i];
    }
    sort(all(a));
    vl b(size * size);
    b[0] = a[0];
    for (int i = 1; i < size; ++i) {
        b[i] = b[i - 1] + c;
    }
    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            b[i * size + j] = b[(i - 1) * size + j] + d;
        }
    }
    sort(all(b));
    cout << (a == b ? "YEs" : "nO") << '\n';
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

