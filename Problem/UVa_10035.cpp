#include <stdio.h>

int main() {
    long long a, b;

    while (scanf("%lld %lld", &a, &b) == 2) {
        if (a == 0 && b == 0) {
            break;
        }

        int carry = 0;
        int cnt = 0;

        while (a > 0 || b > 0) {
            int sum = a % 10 + b % 10 + carry;

            if (sum >= 10) {
                carry = 1;
                cnt++;
            } else {
                carry = 0;
            }

            a /= 10;
            b /= 10;
        }

        if (cnt == 0) {
            printf("No carry operation.\n");
        }
        else if (cnt == 1) {
            printf("1 carry operation.\n");
        }
        else {
            printf("%d carry operations.\n", cnt);
        }
    }
}