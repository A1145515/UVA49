#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;

    while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) == 8) {
        double cx, cy; 
        double p1x, p1y, p2x, p2y; 

        if (x1 == x3 && y1 == y3) {
            cx = x1; cy = y1;
            p1x = x2; p1y = y2;
            p2x = x4; p2y = y4;
        } else if (x1 == x4 && y1 == y4) {
            cx = x1; cy = y1;
            p1x = x2; p1y = y2;
            p2x = x3; p2y = y3;
        } else if (x2 == x3 && y2 == y3) {
            cx = x2; cy = y2;
            p1x = x1; p1y = y1;
            p2x = x4; p2y = y4;
        } else {
            cx = x2; cy = y2;
            p1x = x1; p1y = y1;
            p2x = x3; p2y = y3;
        }

        double ans_x = p1x + p2x - cx;
        double ans_y = p1y + p2y - cy;

        printf("%.3f %.3f\n", ans_x, ans_y);
    }

    return 0;
}