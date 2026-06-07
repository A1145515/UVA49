#include <stdio.h>
#include <string.h>

int main() {
    char a[1005], b[1005];

    while (fgets(a, sizeof(a), stdin)) {

        if (!fgets(b, sizeof(b), stdin)) {
            break;
        }

        int cntA[26] = {0};
        int cntB[26] = {0};

        for (int i = 0; a[i]; i++) {
            if (a[i] >= 'a' && a[i] <= 'z') {
                cntA[a[i] - 'a']++;
            }
        }

        for (int i = 0; b[i]; i++) {
            if (b[i] >= 'a' && b[i] <= 'z') {
                cntB[b[i] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++) {
            int t = cntA[i] < cntB[i] ? cntA[i] : cntB[i];

            for (int j = 0; j < t; j++) {
                putchar('a' + i);
            }
        }

        putchar('\n');
    }
}