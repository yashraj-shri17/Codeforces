#include <iostream>
#include <vector>
#include <algorithm> // for std::max_element
#include <numeric>   // for std::gcd
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> v(n-1);
        for (int j = 1; j <= n-1; j++) {
            v[j-1] = std::gcd(n, j) + j;
        }
        auto max_it = std::max_element(v.begin(), v.end());
            int max_index = std::distance(v.begin(), max_it);
            cout << max_index+1<< endl;
    }

    return 0;
}
