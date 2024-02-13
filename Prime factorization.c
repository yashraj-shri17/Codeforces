#include <stdio.h>

int factors(int n) {
    for (int i = 2; i <= n; ++i) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            ++count;
        }

        if (count > 0) {
            for (int j = 0; j < count; ++j) {
                printf("%d", i);
                if (j < count - 1 || n > 1) {
                    printf("*");
                }
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    factors(n);

    return 0;
}