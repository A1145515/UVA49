#include <stdio.h>

long long vec[10005];

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    for (int case_num = 1; case_num <= t; case_num++) {
        char t1, t2;
        int n;
        
        scanf(" %c %c %d", &t1, &t2, &n);

        int total = n * n;
        int flag = 1;

        if (n < 0) {
            flag = 0;
        } else {
            for (int i = 0; i < total; i++) {
                scanf("%lld", &vec[i]);
                if (vec[i] < 0) {
                    flag = 0;
                }
            }
        }

        for (int i = 0; i < total / 2 && flag; i++) {
            if (vec[i] != vec[total - 1 - i]) {
                flag = 0;
            }
        }

        if (flag) {
            printf("Test #%d: Symmetric.\n", case_num);
        } else {
            printf("Test #%d: Non-symmetric.\n", case_num);
        }
    }
}