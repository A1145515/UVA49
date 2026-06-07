#include <stdio.h>
#include <string.h>

int main() {

    char a[] = "`1234567890-="
                 "QWERTYUIOP[]\\"
                 "ASDFGHJKL;'"
                 "ZXCVBNM,./";

    char line[10000];

    while (fgets(line, sizeof(line), stdin)) {

        for (int i = 0; line[i]; i++) {

            if (line[i] == ' ' || line[i] == '\n') {
                putchar(line[i]);
                continue;
            }

            for (int j = 0; a[j]; j++) {
                if (a[j] == line[i]) {
                    putchar(a[j - 1]);
                    break;
                }
            }
        }
    }
}