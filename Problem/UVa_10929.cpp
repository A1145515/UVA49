#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    while (scanf("%s", s) == 1) {

        if (s[0] == '0') {
            break;
        }

        int odd = 0, even = 0;

        for (int i = 0; s[i]; i++) {
            int d = s[i] - '0';

            if (i % 2 == 0) {
                odd += d;
            }
            else {
                even += d;
            }
        }

        int diff = odd - even;

        if (diff % 11 == 0) {
            printf("%s is a multiple of 11.\n", s);
        }
        else {
            printf("%s is not a multiple of 11.\n", s);
        }
    }
}