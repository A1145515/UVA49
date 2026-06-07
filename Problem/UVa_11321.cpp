#include <stdio.h>
#include <stdlib.h>

int M;

int cmp(const void *a, const void *b) {

    int x = *(int*)a;
    int y = *(int*)b;

    int mx = x % M;
    int my = y % M;

    if (mx != my) {
        return mx - my;
    }

    int xOdd = x % 2 != 0;
    int yOdd = y % 2 != 0;

    if (xOdd && !yOdd){
        return -1;
    }
    if (!xOdd && yOdd){
        return 1;
    }
    if (xOdd && yOdd){
        return y - x;
    }

    return x - y;
}

int main() {

    int N;

    while (scanf("%d %d", &N, &M) == 2) {

        printf("%d %d\n", N, M);

        if (N == 0 && M == 0) {
            break;
        }

        int a[10000];

        for (int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
        }

        qsort(a, N, sizeof(int), cmp);

        for (int i = 0; i < N; i++) {
            printf("%d\n", a[i]);
        }
    }
}