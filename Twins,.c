#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        totalSum += arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());

    int sum = 0;
    int coins = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
        coins++;
        if (sum > totalSum - sum) {
            break;
        }
    }

    cout << coins << endl;

    return 0;
}
