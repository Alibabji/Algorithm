//https://www.acmicpc.net/problem/2525

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int time, minute, hour;
	scanf("%d %d %d", &hour, &minute, &time);
	minute += time;
	hour += minute / 60;
	minute %= 60;
	if (hour - 24 >= 0)hour -= 24;
	printf("%d %d", hour, minute);
	return 0;
}