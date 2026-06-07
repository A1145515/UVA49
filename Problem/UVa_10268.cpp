#include <stdio.h>

long long a[1000005];

int main() {
    long long x;

    while (scanf("%lld", &x) == 1) {
        int n = 0;
        char ch;

        while (1) {
            scanf("%lld%c", &a[n], &ch);
            n++;
            if (ch == '\n') {
                break;
            }
        }

        n--; 

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum * x + a[i] * (n - i);
        }

        printf("%lld\n", sum);
    }
}