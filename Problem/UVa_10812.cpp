#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    while (n--) {

        long long s, d;
        scanf("%lld %lld", &s, &d);

        if (s < d || (s + d) % 2 != 0) {
            printf("impossible\n");
            continue;
        }

        long long x = (s + d) / 2;
        long long y = (s - d) / 2;

        printf("%lld %lld\n", x, y);
    }
}