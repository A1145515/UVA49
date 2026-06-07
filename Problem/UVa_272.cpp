#include <stdio.h>

int main() {
    int c;
    int open = 1;

    while ((c = getchar()) != EOF) {
        if (c == '"') {
            if (open)
                printf("``");
            else
                printf("''");

            open = !open;
        } else {
            putchar(c);
        }
    }
}