#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[40];
    int count;
} Tree;

int cmp(const void *a, const void *b) {
    return strcmp(((Tree*)a)->name, ((Tree*)b)->name);
}

int main() {
    int T;
    scanf("%d\n\n", &T);

    while (T--) {

        Tree arr[10000];
        int n = 0;

        char line[40];
        int total = 0;

        while (fgets(line, sizeof(line), stdin)) {

            if (line[0] == '\n') {
                break;
            }
            line[strcspn(line, "\n")] = 0;

            int found = 0;

            for (int i = 0; i < n; i++) {
                if (strcmp(arr[i].name, line) == 0) {
                    arr[i].count++;
                    found = 1;
                    break;
                }
            }

            if (!found) {
                strcpy(arr[n].name, line);
                arr[n].count = 1;
                n++;
            }
            total++;
        }

        qsort(arr, n, sizeof(Tree), cmp);

        for (int i = 0; i < n; i++) {
            printf("%s %.4f\n", arr[i].name, arr[i].count * 100.0 / total);
        }

        if (T) {
            printf("\n");
        }
    }
}