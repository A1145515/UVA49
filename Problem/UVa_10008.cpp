#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
    char ch;
    int freq;
} Letter;

int cmp(const void *a, const void *b) {
    Letter *x = (Letter *)a;
    Letter *y = (Letter *)b;

    if (x->freq != y->freq)
        return y->freq - x->freq;

    return x->ch - y->ch;
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    int cnt[26] = {0};
    char line[1000];

    for (int i = 0; i < n; i++) {
        fgets(line, sizeof(line), stdin);

        for (int j = 0; line[j]; j++) {
            if (isalpha(line[j])) {
                cnt[toupper(line[j]) - 'A']++;
            }
        }
    }

    Letter arr[26];

    for (int i = 0; i < 26; i++) {
        arr[i].ch = 'A' + i;
        arr[i].freq = cnt[i];
    }

    qsort(arr, 26, sizeof(Letter), cmp);

    for (int i = 0; i < 26; i++) {
        if (arr[i].freq > 0) {
            printf("%c %d\n", arr[i].ch, arr[i].freq);
        }
    }
}