#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int n;

    while (scanf("%d", &n) == 1) {

        if (n == 0) {
            break;
        }

        while (n >= 10) {
            n = sumDigits(n);
        }

        printf("%d\n", n);
    }
}