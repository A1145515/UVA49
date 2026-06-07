#include <stdio.h>
#include <string.h>

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int scent[55][55];

int main() {

    int X, Y;
    scanf("%d %d", &X, &Y);

    int x, y;
    char dir;
    char cmd[105];

    while (scanf("%d %d %c", &x, &y, &dir) == 3) {

        scanf("%s", cmd);

        int d;
        if (dir == 'N') d = 0;
        else if (dir == 'E') d = 1;
        else if (dir == 'S') d = 2;
        else d = 3;

        int lost = 0;

        for (int i = 0; cmd[i]; i++) {

            if (cmd[i] == 'L') {
                d = (d + 3) % 4;
            }
            else if (cmd[i] == 'R') {
                d = (d + 1) % 4;
            }
            else {

                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx < 0 || nx > X || ny < 0 || ny > Y) {

                    if (scent[x][y]) {
                        continue;
                    }

                    scent[x][y] = 1;
                    lost = 1;
                    break;
                }

                x = nx;
                y = ny;
            }
        }

        char outDir;
        if (d == 0) outDir = 'N';
        else if (d == 1) outDir = 'E';
        else if (d == 2) outDir = 'S';
        else outDir = 'W';

        printf("%d %d %c", x, y, outDir);

        if (lost) printf(" LOST");
        printf("\n");
    }
}