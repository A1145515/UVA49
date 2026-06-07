#include <stdio.h>
#include <string.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1) {
        if (n == 0) {
            break;
        }

        int top = 1, bottom = 6;
        int north = 2, south = 5;
        int east = 3, west = 4;

        char cmd[20];

        for (int i = 0; i < n; i++) {
            scanf("%s", cmd);

            int tmp;

            if (strcmp(cmd, "north") == 0) {
                tmp = top;
                top = south;
                south = bottom;
                bottom = north;
                north = tmp;
            }

            else if (strcmp(cmd, "south") == 0) {
                tmp = top;
                top = north;
                north = bottom;
                bottom = south;
                south = tmp;
            }

            else if (strcmp(cmd, "east") == 0) {
                tmp = top;
                top = west;
                west = bottom;
                bottom = east;
                east = tmp;
            }

            else if (strcmp(cmd, "west") == 0) {
                tmp = top;
                top = east;
                east = bottom;
                bottom = west;
                west = tmp;
            }
        }
        printf("%d\n", top);
    }
}