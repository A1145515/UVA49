#include <stdio.h>

int main() {
    long long S, D;

    while (scanf("%lld %lld", &S, &D) == 2) {

        long long n = D - S + 1;
        long long ans = n * (S + D) / 2;

        printf("%lld\n", ans);
    }
}