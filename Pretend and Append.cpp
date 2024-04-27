#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        // scanning binary string
        vector<char> v(n);
        for(int j = 0; j < n; j++) {
           cin >> v[j] ; 
        }
        int x = n-1;
        int count = 0;
        // loop for comparing first and last , then second and second last , and so on.
        for(int p = 0 ; p < n; p++){
            if(v[p] != v[x]) { // Compare directly with '\n'
                count += 2;
                x--;
            }
            else{
                break;
            }
        }
        if(n-count > 0){
        cout << n - count << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}
