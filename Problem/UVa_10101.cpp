#include <stdio.h>

void solve(long long n) {

    if (n >= 10000000) {
        solve(n / 10000000);
        printf(" kuti");
        n %= 10000000;
    }

    if (n >= 100000) {
        printf(" %lld lakh", n / 100000);
        n %= 100000;
    }

    if (n >= 1000) {
        printf(" %lld hajar", n / 1000);
        n %= 1000;
    }

    if (n >= 100) {
        printf(" %lld shata", n / 100);
        n %= 100;
    }

    if (n > 0)
        printf(" %lld", n);
}

int main() {
    long long n;
    int tc = 1;

    while (scanf("%lld", &n) == 1) {

        printf("%4d.", tc++);

        if (n == 0) {
            printf(" 0\n");
            continue;
        }

        solve(n);
        printf("\n");
    }
}