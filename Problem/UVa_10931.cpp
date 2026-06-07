#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1) {

        if (n == 0) {
            break;
        }

        int bits[32];
        int idx = 0;
        int count = 0;

        int temp = n;

        while (temp > 0) {
            bits[idx] = temp % 2;
            count += bits[idx];
            temp /= 2;
            idx++;
        }

        printf("The parity of ");

        for (int i = idx - 1; i >= 0; i--) {
            printf("%d", bits[i]);
        }
        printf(" is %d (mod 2).\n", count);
    }
}