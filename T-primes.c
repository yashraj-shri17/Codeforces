#include <stdio.h>
#include <math.h>

int is_prime(long long n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int is_t_prime(long long x) {
    long long sqrt_x = (long long)sqrt(x);
    return sqrt_x * sqrt_x == x && is_prime(sqrt_x);
}

int main() {
    int n;
    scanf("%d", &n);
    long long numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &numbers[i]);
    }
    for (int i = 0; i < n; i++) {
        if (is_t_prime(numbers[i])) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}