#include <stdio.h>
#pragma warning(disable:4996);

int main() {
	int days[12] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
	int c, m, d, total, which_day;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		scanf("%d %d", &m, &d);
		total = 0;
		for (int j = 0; j < m; j++) {
			total += days[j];
		}
		total += d;
		which_day = (total - 2) % 7;
		if (m == 1 && d == 1) {
			printf("Saturday\n");
		}
		else if (which_day == 1) {
			printf("Monday\n");
		}
		else if (which_day == 2) {
			printf("Tuesday\n");
		}
		else if (which_day == 3) {
			printf("Wednesday\n");
		}
		else if (which_day == 4) {
			printf("Thursday\n");
		}
		else if (which_day == 5) {
			printf("Friday\n");
		}
		else if (which_day == 6) {
			printf("Saturday\n");
		}
		else {
			printf("Sunday\n");
		}
	}
}