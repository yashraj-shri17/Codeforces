#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 1) {
        // Perfect permutation is not possible for odd n
        printf("-1");
    } else {
        // Output a perfect permutation for even n
        for (int i = 2; i <= n; i += 2) {
            printf("%d %d ", i, i - 1);
        }
        
    }

    return 0;
}