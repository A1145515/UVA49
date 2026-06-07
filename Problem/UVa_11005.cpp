#include <stdio.h>
#include <string.h>

int cost[36];

int val(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    return c - 'A' + 10;
}

int valid(char *s, int base) {
    for (int i = 0; s[i]; i++) {
        if (val(s[i]) >= base) {
            return 0;
        }
    }
    return 1;
}

long long calc(char *s, int base) {
    long long res = 0;

    for (int i = 0; s[i]; i++) {
        res += cost[val(s[i])];
    }

    return res;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {

        for (int i = 0; i < 36; i++) {
            scanf("%d", &cost[i]);
        }

        char s[100];

        printf("Case %d: ", tc);

        int minCost = 1e9;

        for (int base = 2; base <= 36; base++) {

            if (!valid(s, base)) {
                continue;
            }

            int c = calc(s, base);

            if (c < minCost) {
                minCost = c;
            }
        }

        printf("%d\n", minCost);
    }
}