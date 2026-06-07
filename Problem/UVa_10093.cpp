#include <stdio.h>
#include <string.h>

int val(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 10;
    } 
    return c - 'a' + 36;
}

int main() {
    char s[100];

    while (scanf("%s", s) == 1) {

        int len = strlen(s);
        int maxv = 0;

        for (int i = 0; i < len; i++) {
            int v = val(s[i]);
            if (v > maxv) {
                maxv = v;
            }
        }

        int base = maxv + 1;
        if (base < 2) {
            base = 2;
        }

        long long ans = 0;

        for (int i = 0; i < len; i++) {
            ans = ans * base + val(s[i]);
        }

        printf("%d\n", base);
    }
}