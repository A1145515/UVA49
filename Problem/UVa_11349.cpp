#include <stdio.h>

long long a[105][105];

int main() {

    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {

        char dummy[10];
        scanf("%s %s %s", dummy, dummy, dummy);

        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%lld", &a[i][j]);
            }
        }

        int ok = 1;

        for (int i = 0; i < n && ok; i++) {
            for (int j = 0; j < n; j++) {

                if (a[i][j] < 0) {
                    ok = 0;
                    break;
                }

                if (a[i][j] != a[n - 1 - i][n - 1 - j]) {
                    ok = 0;
                    break;
                }
            }
        }

        printf("Test #%d: ", tc);

        if (ok) {
            printf("Symmetric.\n");
        }
        else {
            printf("Non-symmetric.\n");
        }
    }
}