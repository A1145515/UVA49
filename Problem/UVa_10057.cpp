#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int arr[1000005];

int main() {
    int n;

    while (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        qsort(arr, n, sizeof(int), compare);

        int mid1 = arr[(n - 1) / 2];
        int mid2 = arr[n / 2];

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= mid1 && arr[i] <= mid2) {
                count++;
            }
        }

        int possible_A_count = mid2 - mid1 + 1;

        printf("%d %d %d\n", mid1, count, possible_A_count);
    }
}