#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int result = -1;
        for (int x = 0; x < 256; x++) {
            vector<int> b(n);
            for (int i = 0; i < n; i++) {
                b[i] = a[i] ^ x;
            }
            int xor_sum = 0;
            for (int i = 0; i < n; i++) {
                xor_sum ^= b[i];
            }
            if (xor_sum == 0) {
                result = x;
                break;
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}

