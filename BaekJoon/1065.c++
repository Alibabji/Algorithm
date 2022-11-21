//https://www.acmicpc.net/problem/1065

#include <stdio.h>
int check(int a)
{
	int one = a % 10, ten = a / 10 % 10, hund = a / 100 % 10;
	bool figure=0;
	if (a < 100)figure = 1;
	else if (a < 1000 && hund - ten == ten - one)figure = 1;
	return figure;
}
int main(void)
{
	int a, b = 0, i = 1;
	scanf("%d", &a);
	for (; i < a + 1; i++) b += check(i);
	printf("%d", b);
	return 0;
}