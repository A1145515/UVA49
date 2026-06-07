#include <stdio.h>
#include <string.h>

int main() {
    char lines[105][105];
    int n = 0;
    int maxLen = 0;

    while (fgets(lines[n], sizeof(lines[n]), stdin)) {
        int len = strlen(lines[n]);

        if (lines[n][len - 1] == '\n') {
            lines[n][--len] = '\0';
        }

        if (len > maxLen){
            maxLen = len;
        }
        n++;
    }

    for (int col = 0; col < maxLen; col++) {
        for (int row = n - 1; row >= 0; row--) {
            int len = strlen(lines[row]);

            if (col < len)
                putchar(lines[row][col]);
            else
                putchar(' ');
        }
        putchar('\n');
    }
}