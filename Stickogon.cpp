#include <bits/stdc++.h>

using namespace std;

int main(){ 
  int num_tests; 
  cin >> num_tests;
  while(num_tests--) {
    int size; 
    cin >> size; 
    vector<int> counts(101, 0);
    for (int i = 0; i < size; i++) {
      int val; 
      cin >> val;
      counts[val]++;
    }
    int total = 0;
    for (auto& count : counts) 
      total += count / 3;
    cout << total << "\n";
  }
}

