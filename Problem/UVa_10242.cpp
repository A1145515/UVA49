#include <stdio.h>

int main() {

    double x1, y1, x2, y2, x3, y3, x4, y4;

    while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
                 &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) == 8) {

        double px, py;

        double p1x = x2 + x3 - x1;
        double p1y = y2 + y3 - y1;

        double p2x = x1 + x3 - x2;
        double p2y = y1 + y3 - y2;

        double p3x = x1 + x4 - x2;
        double p3y = y1 + y4 - y2;

        double p4x = x2 + x4 - x1;
        double p4y = y2 + y4 - y1;

        px = p1x;
        py = p1y;

        printf("%.3f %.3f\n", px, py);
    }
}