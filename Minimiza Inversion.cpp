#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        pair<int,int> p[n];
        for(int i = 0; i < n; ++i)
        {
            cin >> p[i].first;
        }
        for(int i = 0; i < n; ++i)
        {
            cin >> p[i].second;
        }
        sort(p, p + n);
        for(int i = 0; i < n; ++i)
        {
            cout << p[i].first << ' ';
        }
        cout << "\n";
        for(int i = 0; i < n; ++i)
        {
            cout << p[i].second << ' ';
        }
        cout << "\n";
    }
}

