#include <iostream>
#include <vector>

using namespace std;

int main() {
	// scan variable
	int t;
	cin >> t;
	while (t--) {
		int n, m, k;
		// scanning test_variables
		cin >> n >> m >> k;
		int ans = 0;
		vector<int> v1(n);
		for (int i = 0; i < n; i++) {
			cin >> v1[i];
		}
		int o;
		for (int j = 0; j < m; j++) {
			cin >> o;
			for (int i = 0; i < n; i++) {
				if ((o + v1[i]) <= k) ans++;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}