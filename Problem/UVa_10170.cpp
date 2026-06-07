#include <stdio.h>

long long S, D;

long long calc(long long k) {
    return k * S + k * (k - 1) / 2;
}

int main() {

    while (scanf("%lld %lld", &S, &D) == 2) {

        long long l = 1, r = 2000000000, ans = 1;

        while (l <= r) {

            long long mid = (l + r) / 2;

            if (calc(mid) >= D) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        printf("%lld\n", S + (ans - 1));
    }
}