#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int strength = 0, current = 0;

    for (int i = 0; i < n; ++i) {
        int x, y;
        scanf("%d %d", &x, &y);
        current = current - x + y;
        if (current > strength) {
            strength = current;
        }
    }

    printf("%d\n", strength);

    return 0;
}

