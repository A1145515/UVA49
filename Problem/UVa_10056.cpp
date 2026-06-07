#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n, i;
        double p;

        scanf("%d %lf %d", &n, &p, &i);

        if (p == 0.0) {
            printf("0.0000\n");
            continue;
        }

        double q = pow(1.0 - p, n);

        double numerator = pow(1.0 - p, i - 1) * p;
        double denom = 1.0 - q;

        double ans = numerator / denom;

        printf("%.4f\n", ans);
    }
}