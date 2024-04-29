#include <iostream>
using namespace std;

int main() {
    int t; //scanning test cases
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k % 2 == 0 && n % 2 != 0) {
            cout << "NO" << endl;
        } else if (k % 2 == 0 && n % 2 == 0) {
            cout << "YES" << endl;
        } else {
            for (long long y = 0; y >= 0; y++) {
                if (y % 2 != 0 && k % 2 != 0 && n % 2 != 0) {
                    cout << "YES" << endl;
                    break;
                } else if (y % 2 == 0 && k % 2 != 0 && n % 2 == 0) {
                    cout << "YES" << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
