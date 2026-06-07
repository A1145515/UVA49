#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    int a[100000];

    while (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        qsort(a, n, sizeof(int), cmp);

        int L = a[(n - 1) / 2];
        int R = a[n / 2];

        int cnt = R - L + 1;

        int ways = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] >= L && a[i] <= R) {
                ways++;
            }
        }

        printf("%d %d %d\n", L, cnt, ways);
    }
}