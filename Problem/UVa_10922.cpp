#include <stdio.h>
#include <string.h>

int digitSum(char *s) {
    int sum = 0;
    for (int i = 0; s[i]; i++) {
        sum += s[i] - '0';
    }
    return sum;
}

int main() {
    char s[1000];

    while (scanf("%s", s) == 1) {

        if (s[0] == '0') {
            break;
        }

        int sum = 0;
        for (int i = 0; s[i]; i++) {
            sum += s[i] - '0';
        }

        int degree = 1;

        if (sum % 9 != 0) {
            printf("%s is not a multiple of 9.\n", s);
            continue;
        }

        while (sum != 9) {
            int tmp = 0;

            while (sum > 0) {
                tmp += sum % 10;
                sum /= 10;
            }
            sum = tmp;
            degree++;
        }
        printf("%s is a multiple of 9 and has 9-degree %d.\n", s, degree);
    }
}