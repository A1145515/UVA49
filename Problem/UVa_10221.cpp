#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI acos(-1.0)
#define R 6440.0

int main() {
    double s, a;
    char unit[10];

    while (scanf("%lf %lf %s", &s, &a, unit) == 3) {
        double r = R + s;

        if (unit[0] == 'm') {
            a = a / 60.0;
        }

        a = fmod(a, 360.0);

        if (a > 180.0) {
            a = 360.0 - a;
        }

        double rad = a * PI / 180.0;
        double arc = r * rad;
        double chord = 2.0 * r * sin(rad / 2.0);

        printf("%.6f %.6f\n", arc, chord);
    }

    return 0;
}