#include <stdio.h>
#include <string.h>

int main() {
    int maxX, maxY;
    scanf("%d %d", &maxX, &maxY);

    int scent[55][55][4] = {0};

    char dirChar;
    int x, y;
    char cmd[110];

    const char dirs[] = "NESW";
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    while (scanf("%d %d %c", &x, &y, &dirChar) == 3) {
        scanf("%s", cmd);

        int dir;
        for (dir = 0; dir < 4; dir++)
            if (dirs[dir] == dirChar)
                break;

        int lost = 0;

        for (int i = 0; cmd[i] && !lost; i++) {
            if (cmd[i] == 'L') {
                dir = (dir + 3) % 4;
            }
            else if (cmd[i] == 'R') {
                dir = (dir + 1) % 4;
            }
            else {
                int nx = x + dx[dir];
                int ny = y + dy[dir];

                if (nx < 0 || nx > maxX || ny < 0 || ny > maxY) {
                    if (scent[x][y][dir])
                        continue;

                    scent[x][y][dir] = 1;
                    lost = 1;
                } else {
                    x = nx;
                    y = ny;
                }
            }
        }

        printf("%d %d %c", x, y, dirs[dir]);
        if (lost) printf(" LOST");
        printf("\n");
    }
}