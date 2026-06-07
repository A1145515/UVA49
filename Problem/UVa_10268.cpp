#include <stdio.h>

int main() {
    long long x;

    while (scanf("%lld", &x) == 1) {

        long long coef[10000];
        int n = 0;

        while (scanf("%lld", &coef[n]) == 1) {
            n++;
            if (getchar() == '\n') {
                break;
            }
        }

        long long val = 0;
        long long der = 0;

        for (int i = 0; i < n; i++) {
            der = der * x + val;
            val = val * x + coef[i];
        }

        printf("%lld\n", der);
    }
}