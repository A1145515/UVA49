#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n, p;
        scanf("%d", &n);
        scanf("%d", &p);

        int hartal[3650] = {0};

        for (int i = 0; i < p; i++) {
            int h;
            scanf("%d", &h);

            for (int d = h; d <= n; d += h) {
                int dayOfWeek = d % 7;

                if (dayOfWeek == 6 || dayOfWeek == 0) {
                    continue;
                }
                hartal[d] = 1;
            }
        }

        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (hartal[i]) {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}