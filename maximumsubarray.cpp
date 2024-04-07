//Algorithm 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2}; 
    int n = 8; 

    int best = INT_MIN; 

    for (int a = 0; a < n; a++) {
        for (int b = a; b < n; b++) {
            int sum = 0;
            for (int k = a; k <= b; k++) {
                sum += array[k];
            }
            best = max(best, sum);
        }
    }
    cout << best << "\n";
    return 0; 
}

//Algorithm 2
#include <bits/stdc++.h>
using namespace std;
int main() {
    int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2}; 
    int n = 8; 
    int best = 0;
    for (int a = 0; a < n; a++) {
int sum = 0;
for (int b = a; b < n; b++) {
sum += array[b];
best = max(best,sum);
}
}
cout << best << "\n";

   
    return 0; 
}
//Algorithm 3
#include <bits/stdc++.h>
using namespace std;
int main() {
    int array[8] = {-1, 2, 4, -3, 5, 2, -5, 2}; 
    int n = 8; 
    int best = 0, sum = 0;
for (int k = 0; k < n; k++) {
sum = max(array[k],sum+array[k]);
best = max(best,sum);
}
cout << best << "\n";

   
    return 0; 
}
