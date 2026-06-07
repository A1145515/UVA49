#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        int a[505];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        qsort(a, n, sizeof(int), cmp);

        int mid = a[n / 2];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += abs(a[i] - mid);
        }
        printf("%d\n", sum);
    }
}