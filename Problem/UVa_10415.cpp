#include <stdio.h>
#include <string.h>

int main() {

    int T;
    scanf("%d", &T);
    getchar();

    while (T--) {

        char s[1000];
        fgets(s, sizeof(s), stdin);

        int press[10] = {0};

        int hold[10] = {0};

        for (int i = 0; s[i] && s[i] != '\n'; i++) {

            int need[10] = {0};

            char c = s[i];

            if (c == 'c') { need[2]=need[3]=need[4]=need[7]=need[8]=1; }
            else if (c == 'd') { need[2]=need[3]=need[4]=need[7]=1; }
            else if (c == 'e') { need[2]=need[3]=need[4]=1; }
            else if (c == 'f') { need[2]=need[3]=1; }
            else if (c == 'g') { need[2]=1; }
            else if (c == 'a') { need[1]=need[2]=1; }
            else if (c == 'b') { need[1]=1; }

            else if (c == 'C') { need[3]=need[4]=need[7]=need[8]=1; }
            else if (c == 'D') { need[3]=need[4]=need[7]=1; }
            else if (c == 'E') { need[3]=need[4]=1; }
            else if (c == 'F') { need[3]=1; }
            else if (c == 'G') { /* none */ }
            else if (c == 'A') { need[1]=1; }
            else if (c == 'B') { need[1]=need[2]=1; }

            for (int j = 1; j <= 9; j++) {
                if (need[j] && !hold[j]) {
                    press[j]++;
                }
                hold[j] = need[j];
            }
        }

        for (int i = 1; i <= 9; i++) {
            printf("%d%c", press[i], (i==9?'\n':' '));
        }
    }
}