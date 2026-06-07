#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1) {

        int total = n;

        while (n >= 3) {
            int newDrink = n / 3;
            total += newDrink;
            n = n / 3 + n % 3;
        }

        printf("%d\n", total);
    }
}