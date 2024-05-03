#include <iostream>
#include <vector>
#include <cmath>
//INCLUDING LIBRARIES
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int minAbs = abs(v[0]);
    for(int j = 1; j < n; j++) {
        minAbs = min(minAbs, abs(v[j]));
    }

    cout << minAbs << endl;
    return 0;
}
