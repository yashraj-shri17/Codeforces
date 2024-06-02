#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test_cases;
    cin >> test_cases;
    
    while (test_cases--)
    {
        ll num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        
        ll total = num1 + num2 + num3;
        
        if (total % 2 != 0)
        {
            cout << -1 << '\n';
            continue;
        }
        
        ll result = min((total / 2), (num1 + num2));
        cout << result << '\n';
    }
    
    return 0;
}
