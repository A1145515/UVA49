#include <stdio.h>
#include <string.h>

int main() {

    char s[1005];

    while (scanf("%s", s) == 1) {

        if (s[0] == '0' && s[1] == '\0') {
            break;
        }

        int sign = 1;
        int sum = 0;

        for (int i = 0; s[i]; i++) {

            sum += sign * (s[i] - '0');
            sign = -sign;
        }

        if (sum % 11 == 0) {
            printf("%s is a multiple of 11.\n", s);
        }
        else {
            printf("%s is not a multiple of 11.\n", s);
        }
    }
}