#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> f(26, 0);
        for(char c : s) {
            f[c - 'a']++;
        }
        vector<char> a;
        for(int j = 0; j < 26; j++) {
            if(f[j] > 0) {
                a.push_back(j + 'a');
            }
        }

        sort(a.begin(), a.end());
        vector<char> b(a);
        reverse(b.begin(), b.end());
        vector<char> m(26);
        for(int j = 0; j < a.size(); j++) {
            m[a[j] - 'a'] = b[j];
        }
        string ns;
        for(char c : s) {
            ns += m[c - 'a'];
        }

        cout << ns << "\n";
    }
    return 0;
}

