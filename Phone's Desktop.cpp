#include <bits/stdc++.h>
using namespace std;
int f(int a, int b) {
    int c = (b + 1) / 2;
    int d = (c * 15) - (b * 4);
    int e = max(0, a - d);
    int g = (e + 14) / 15;
    return c + g;
}

int main() {
    int t;
    cin >> t;
    vector<int> results;
    for (int i = 0; i < t; ++i) {
        int a, b;
        cin >> a >> b;
        results.push_back(f(a, b));
    }
    for (const int &result : results) {
        cout << result << endl;
    }
    return 0;
}

