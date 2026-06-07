#include <stdio.h>

int main() {
    long long n, m;
    long long seq[40]; 

    while (scanf("%lld %lld", &n, &m) == 2) {
        // n 必須大於等於 2，m 必須大於等於 2，且 n 必須大於等於 m
        if (n < 2 || m < 2 || n < m) {
            printf("Boring!\n");
            continue;
        }

        int k = 0;
        int is_boring = 0;
        long long current = n;

        while (current > 1) {
            if (current % m != 0) {
                is_boring = 1;
                break;
            }
            seq[k++] = current;
            current /= m;
        }

        seq[k++] = 1;

        if (is_boring) {
            printf("Boring!\n");
        } else {
            for (int i = 0; i < k; i++) {
                printf("%lld%s", seq[i], (i == k - 1) ? "" : " ");
            }
            printf("\n");
        }
    }

    return 0;
}