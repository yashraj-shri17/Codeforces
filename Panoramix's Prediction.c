#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // Check if m is the next prime number after n
    int i, j;
    for (i = n + 1; ; i++) {
        int is_prime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            break;
        }
    }

    // Output result
    if (i == m) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}