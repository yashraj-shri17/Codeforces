#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int advancers = 0;
    int k_score = scores[k - 1];
    for (int i = 0; i < n; i++) {
        if (scores[i] > 0 && scores[i] >= k_score) {
            advancers++;
        }
    }

    printf("%d\n", advancers);
    return 0;
}
