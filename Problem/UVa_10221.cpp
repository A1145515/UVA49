#include <stdio.h>
#include <math.h>

#define PI acos(-1.0)

int main() {
    double s, angle;
    char unit[10];

    while (scanf("%lf %lf %s", &s, &angle, unit) == 3) {

        double R = 6440.0;
        double r = R + s;

        if (unit[0] == 'm') {
            angle = angle / 60.0; // minutes → degrees
        }

        double rad = angle * PI / 180.0;

        double arc = r * rad;
        double chord = 2 * r * sin(rad / 2.0);

        printf("%.6f %.6f\n", arc, chord);
    }
}