#include <stdio.h>

char grid[100][100];

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {

        int m, n, q;
        scanf("%d %d %d", &m, &n, &q);

        for (int i = 0; i < m; i++) {
            scanf("%s", grid[i]);
        }

        printf("%d %d %d\n", m, n, q);

        while (q--) {

            int r, c;
            scanf("%d %d", &r, &c);

            char ch = grid[r][c];
            int k = 0;

            while (1) {

                int ok = 1;

                for (int i = r - k; i <= r + k; i++) {
                    for (int j = c - k; j <= c + k; j++) {

                        if (i < 0 || i >= m || j < 0 || j >= n) {
                            ok = 0;
                            break;
                        }

                        if (grid[i][j] != ch) {
                            ok = 0;
                            break;
                        }
                    }
                    if (!ok) {
                        break;
                    }
                }

                if (!ok) {
                    break;
                }

                k++;
            }
            printf("%d\n", 2 * k - 1);
        }
    }
}