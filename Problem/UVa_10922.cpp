#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996);

int main() {
	int count,degree;
	char n[1005];

	while (scanf("%s", &n)==1) {
		if (n[0] == '0' && n[1] == '\0') {
			return 0;
		}
		degree = 0;
		count = 0;
		
        for (int i = 0; n[i]; i++) {
            count += n[i] - '0';
        }
        while (count >= 10) {
            int temp = count;
            count = 0;
            degree++;

            while (temp > 0) {
                count += temp % 10;
                temp /= 10;
            }
        }
        if (count == 9) {
            degree++;
            printf("%s is a multiple of 9 and has 9-degree %d.\n", n, degree);
        }
        else {
            printf("%s is not a multiple of 9.\n", n);
        }
    }
}