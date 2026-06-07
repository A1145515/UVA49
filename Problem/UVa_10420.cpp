#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char country[100];
    int count;
} Node;

int cmp(const void *a, const void *b) {
    return strcmp(((Node*)a)->country, ((Node*)b)->country);
}

int main() {

    int n;
    scanf("%d\n", &n);

    Node arr[2000];
    int sz = 0;

    char line[200];

    for (int i = 0; i < n; i++) {

        fgets(line, sizeof(line), stdin);

        char country[100];
        sscanf(line, "%s", country);

        int found = 0;

        for (int j = 0; j < sz; j++) {
            if (strcmp(arr[j].country, country) == 0) {
                arr[j].count++;
                found = 1;
                break;
            }
        }

        if (!found) {
            strcpy(arr[sz].country, country);
            arr[sz].count = 1;
            sz++;
        }
    }

    qsort(arr, sz, sizeof(Node), cmp);

    for (int i = 0; i < sz; i++) {
        printf("%s %d\n", arr[i].country, arr[i].count);
    }
}