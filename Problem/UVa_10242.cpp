#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;

    while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) == 8) {

        double dx = 0, dy = 0;

        if (x1 == x3 && y1 == y3) {
            dx = x2 + x4 - x1;
            dy = y2 + y4 - y1;
        }
        else if (x1 == x2 && y1 == y2) {
            dx = x3 + x4 - x1;
            dy = y3 + y4 - y1;
        }
        else {
            dx = x1 + x2 - x3;
            dy = y1 + y2 - y3;
        }

        printf("%.3f %.3f\n", dx, dy);
    }
}