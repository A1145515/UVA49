#include <stdio.h>
#include <string.h>

long long toDec(char *s) {
    long long val = 0;

    for (int i = 0; s[i]; i++) {
        val = val * 2 + (s[i] - '0');
    }

    return val;
}

long long gcd(long long a, long long b) {
    while (b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {

        char a[35], b[35];

        scanf("%s %s", a, b);

        long long x = toDec(a);
        long long y = toDec(b);

        printf("Pair #%d: ", tc);

        if (gcd(x, y) > 1) {
            printf("All you need is love!\n");
        }
        else {
            printf("Love is not all you need!\n");
        }
    }
}