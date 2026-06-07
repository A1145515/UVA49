#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {

        int A, B;
        scanf("%d %d", &A, &B);

        int sum = 0;

        for (int i = A; i <= B; i++) {
            if (i % 2 == 1) {
                sum += i;
            }
        }

        printf("Case %d: %d\n", tc, sum);
    }
}