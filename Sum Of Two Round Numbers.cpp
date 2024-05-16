#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> res;
		int power = 1;
		while (n > 0) {
			if (n % 10 > 0) {
				res.push_back((n % 10) * power);
			}
			n /= 10;
			power *= 10;
		}
		cout << res.size() << endl;
		for (auto number : res) cout << number << " ";
		cout << endl;
	}
}
