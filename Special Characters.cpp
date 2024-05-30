#include <bits/stdc++.h>
 
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    if (a % 2 == 1) {
      cout << "NO" << '\n';
      continue;
    }
    cout << "YES" << '\n';
    for (int b = 0; b < a / 2; ++b)
      for (int c = 0; c < 2; ++c)
        cout << "AB"[b & 1];
    cout << '\n';
  }
}

