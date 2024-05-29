#include <iostream>
// Yashraj
void solve() {
    int x, y, z;
    std::cin >> x >> y >> z;
    if (x < y && y < z)
        std::cout << "STAIR" << "\n";
    else if (x < y && y > z)
        std::cout << "PEAK" << "\n";
    else
        std::cout << "NONE" << "\n";
}

int main() {
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}

