#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1) {
        int a[3000];
        int seen[3000] = {0};

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int ok = 1;

        for (int i = 1; i < n; i++) {
            int d = abs(a[i] - a[i - 1]);

            if (d < 1 || d > n - 1 || seen[d]) {
                ok = 0;
                break;
            }
            seen[d] = 1;
        }

        if (ok) {
            printf("Jolly\n");
        }
        else {
            printf("Not jolly\n");
        }
    }
}