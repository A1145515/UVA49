#include <stdio.h>
#include <string.h>

int main() {

    char cmd[20];

    while (1) {

        int n;
        scanf("%d", &n);

        if (n == 0) break;

        int top = 1, bottom = 6;
        int north = 2, south = 5;
        int west = 3, east = 4;

        while (n--) {

            scanf("%s", cmd);

            if (strcmp(cmd, "north") == 0) {

                int tmp = top;
                top = south;
                south = bottom;
                bottom = north;
                north = tmp;
            }
            else if (strcmp(cmd, "south") == 0) {

                int tmp = top;
                top = north;
                north = bottom;
                bottom = south;
                south = tmp;
            }
            else if (strcmp(cmd, "east") == 0) {

                int tmp = top;
                top = west;
                west = bottom;
                bottom = east;
                east = tmp;
            }
            else if (strcmp(cmd, "west") == 0) {

                int tmp = top;
                top = east;
                east = bottom;
                bottom = west;
                west = tmp;
            }
        }

        printf("%d\n", top);
    }
}