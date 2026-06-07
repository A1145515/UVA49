#include <stdio.h>

int main() {
    long long n, m;

    while (scanf("%lld %lld", &n, &m) == 2) {

        if (m <= 1) {
            printf("Boring!\n");
            continue;
        }

        long long temp = n;
        int ok = 1;

        while (temp != 1) {
            if (temp % m != 0) {
                ok = 0;
                break;
            }
            temp /= m;
        }

        if (!ok) {
            printf("Boring!\n");
            continue;
        }

        temp = n;
        while (temp != 1) {
            printf("%lld ", temp);
            temp /= m;
        }
        printf("1\n");
    }
}