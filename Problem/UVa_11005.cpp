#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    for (int case_num = 1; case_num <= t; case_num++) {
        int cost[36];
        for (int i = 0; i < 36; i++) {
            scanf("%d", &cost[i]);
        }

        printf("Case %d:\n", case_num);

        int queries;
        scanf("%d", &queries);

        while (queries--) {
            int q;
            scanf("%d", &q);

            int base_costs[37] = {0};
            int min_cost = 2e9;

            for (int base = 2; base <= 36; base++) {
                int temp = q;
                int current_cost = 0;

                if (temp == 0) {
                    current_cost = cost[0];
                } else {
                    while (temp > 0) {
                        current_cost += cost[temp % base];
                        temp /= base;
                    }
                }

                base_costs[base] = current_cost;
                if (current_cost < min_cost) {
                    min_cost = current_cost;
                }
            }

            printf("Cheapest base(s) for number %d:", q);
            for (int base = 2; base <= 36; base++) {
                if (base_costs[base] == min_cost) {
                    printf(" %d", base);
                }
            }
            printf("\n");
        }

        if (case_num < t) {
            printf("\n");
        }
    }
}