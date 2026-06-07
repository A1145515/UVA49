#include <stdio.h>
#include <string.h>

int main() {
    char line[1005];
    int first = 1;

    while (fgets(line, sizeof(line), stdin)) {

        if (!first)
            printf("\n");
        first = 0;

        int freq[130] = {0};

        for (int i = 0; line[i]; i++) {
            freq[(unsigned char)line[i]]++;
        }

        int used[130] = {0};

        while (1) {
            int minFreq = 1e9;
            int ch = -1;

            for (int i = 32; i <= 127; i++) {
                if (!used[i] && freq[i] > 0) {
                    if (freq[i] < minFreq || (freq[i] == minFreq && i > ch)) {
                        minFreq = freq[i];
                        ch = i;
                    }
                }
            }

            if (ch == -1) {
                break;
            }
            printf("%d %d\n", ch, freq[ch]);
            used[ch] = 1;
        }
    }
}