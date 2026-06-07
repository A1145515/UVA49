#include <stdio.h>

int main() {

    int n, caseNo = 1;

    while (scanf("%d", &n) == 1) {

        int a[105];
        int used[20000] = {0};
        int ok = 1;

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                int sum = a[i] + a[j];

                if (used[sum]) {
                    ok = 0;
                }
                used[sum] = 1;
            }
        }

        printf("Case #%d: It is ", caseNo++);

        if (ok) {
            printf("a B2-Sequence.\n");
        }
        else {
            printf("not a B2-Sequence.\n");
        }

        printf("\n");
    }
}