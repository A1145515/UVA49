#include <stdio.h>
#include <math.h>

int main() {

    int a, b;

    while (scanf("%d %d", &a, &b) == 2) {

        if (a == 0 && b == 0) {
            break;
        }

        int L = (int)ceil(sqrt(a));
        int R = (int)floor(sqrt(b));

        if (R < L) {
            printf("0\n");
        }
        else {
            printf("%d\n", R - L + 1);
        }
    }
}