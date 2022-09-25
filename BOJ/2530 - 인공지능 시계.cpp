#include <stdio.h>
int main() {
	int hour, minute, second;
	int time;
	scanf("%d %d %d %d", &hour, &minute, &second, &time);

	int i;
	for (i = 0; i < time; i++) {
		second++;
		if (second >= 60) {
			second -= 60;
			minute++;
		}
		if (minute >= 60) {
			minute -= 60;
			hour++;
		}
		if (hour > 23) {
			hour -= 24;
		}
	}
	printf("%d %d %d", hour, minute, second);

}