#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int case_num = 1;
    int b[105];

    while (scanf("%d", &n) == 1) {
        int is_b2 = 1;

        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
            if (b[i] < 1) {
                is_b2 = 0;
            }
            if (i > 0 && b[i] <= b[i - 1]) {
                is_b2 = 0;
            }
        }

        if (is_b2) {
            int visited[20005] = {0};

            for (int i = 0; i < n; i++) {
                for (int j = i; j < n; j++) {
                    int sum = b[i] + b[j];
                    if (visited[sum]) {
                        is_b2 = 0;
                        break;
                    }
                    visited[sum] = 1;
                }
                if (!is_b2) break;
            }
        }

        if (is_b2) {
            printf("Case #%d: It is a B2-Sequence.\n\n", case_num);
        } else {
            printf("Case #%d: It is not a B2-Sequence.\n\n", case_num);
        }

        case_num++;
    }
}