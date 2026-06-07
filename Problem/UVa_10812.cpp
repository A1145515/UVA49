#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {

        int sum, diff;
        scanf("%d %d", &sum, &diff);

        if (sum < diff || (sum + diff) % 2 != 0) {
            printf("NO\n");
            continue;
        }

        int x = (sum + diff) / 2;
        int y = sum - x;

        if (y < 0) {
            printf("NO\n");
        }
        else {
            printf("%d %d\n", x, y);
        }
    }
}