#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 4e5+5;
int freq[MAX_SIZE];
void solve() {
    int size, result = 0;
    scanf("%d", &size);
    fill(freq + 1, freq + size + 1, 0);
    for (int i = 1, x; i <= size; ++i) {
        scanf("%d", &x);
        result += (++freq[x] == 2);
    }
    printf("%d\n", result);
}
signed main() {
    int num_cases;
    scanf("%d", &num_cases);
    while(num_cases--) {
        solve();
    }
    return 0;
}
