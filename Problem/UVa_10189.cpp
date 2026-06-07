#include <stdio.h>

int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};

int main() {
    int n, m;
    int field = 1;

    while (scanf("%d %d", &n, &m) == 2) {

        if (n == 0 && m == 0) {
            break;
        }

        char map[120][120];

        for (int i = 0; i < n; i++) {
            scanf("%s", map[i]);
        }

        if (field > 1) {
            printf("\n");
        }

        printf("Field #%d:\n", field++);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (map[i][j] == '*') {
                    printf("*");
                    continue;
                }

                int cnt = 0;

                for (int d = 0; d < 8; d++) {
                    int ni = i + dx[d];
                    int nj = j + dy[d];

                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                        if (map[ni][nj] == '*') {
                            cnt++;
                        }
                    }
                }

                printf("%d", cnt);
            }
            printf("\n");
        }
    }
}