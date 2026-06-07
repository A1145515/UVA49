#include <stdio.h>

long long id(long long x, long long y) {
    long long k = x + y;
    return k * (k + 1) / 2 + x;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {

        long long x1, y1, x2, y2;
        scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);

        long long start = id(x1, y1);
        long long end = id(x2, y2);

        printf("Case %d: %lld\n", tc, end - start);
    }
}