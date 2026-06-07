#include <stdio.h>

int countBits(int n) {
    int cnt = 0;

    while (n) {
        cnt += (n & 1);
        n >>= 1;
    }

    return cnt;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int m;
        scanf("%d", &m);

        int b1 = countBits(m);

        int temp = m;
        int digits[20];
        int len = 0;

        while (temp) {
            digits[len++] = temp % 10;
            temp /= 10;
        }

        int hexValue = 0;

        for (int i = len - 1; i >= 0; i--) {
            hexValue = hexValue * 16 + digits[i];
        }

        int b2 = countBits(hexValue);

        printf("%d %d\n", b1, b2);
    }
}