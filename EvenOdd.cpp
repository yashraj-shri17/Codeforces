#include <bits/stdc++.h>
using namespace std;
int main() {
    // #initiating integers
    int n, k;
    cin >> n >> k;

    int odd_count;
    // #loop for odd
    if (n % 2 == 1) {
        odd_count = (n + 1) / 2;
    } else {
        odd_count = n / 2;
    }

    int result;
    // #loop for even
    if (k <= odd_count) {
        result = 2 * k - 1;
    } else {
        result = 2 * (k - odd_count);
    }
    // let's print it
    cout << result << endl;

    return 0;
}