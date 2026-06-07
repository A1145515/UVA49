#include <stdio.h>

int main() {
    int fib[50];
    fib[0] = 1;
    fib[1] = 2;

    int cnt = 2;

    while (1) {
        fib[cnt] = fib[cnt - 1] + fib[cnt - 2];
        if (fib[cnt] > 100000000)
            break;
        cnt++;
    }

    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        printf("%d = ", n);

        int start = cnt - 1;

        while (fib[start] > n){
            start--;
        }
        for (int i = start; i >= 0; i--) {
            if (n >= fib[i]) {
                printf("1");
                n -= fib[i];
            } else {
                printf("0");
            }
        }
        printf(" (fib)\n");
    }
}