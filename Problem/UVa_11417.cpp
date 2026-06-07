#include <stdio.h>

int gcd(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {

    int n;

    while (scanf("%d", &n) == 1) {

        if (n == 0) {
            break;
        }

        int sum = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                sum += gcd(i, j);
            }
        }

        printf("%d\n", sum);
    }
}