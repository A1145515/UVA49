#include <stdio.h>
#include <string.h>

int get_value(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    if (c >= 'a' && c <= 'z') return c - 'a' + 36;
    return -1;
}

int main() {
    char s[10005];

    while (scanf("%s", s) == 1) {
        long long sum = 0;
        int max_digit = 0;

        for (int i = 0; s[i] != '\0'; i++) {
            int val = get_value(s[i]);
            if (val != -1) {
                sum += val;
                if (val > max_digit) {
                    max_digit = val;
                }
            }
        }

        int start_base = max_digit + 1;
        if (start_base < 2) start_base = 2;

        int found = 0;
        for (int n = start_base; n <= 62; n++) {
            if (sum % (n - 1) == 0) {
                printf("%d\n", n);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("such number is impossible!\n");
        }
    }

    return 0;
}