//https://www.acmicpc.net/problem/10872

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int i) //4
{
	if (i == 0) return 1;
	if (i > 0) return i * factorial(i - 1); //return 4 * 3 * 
}
int main(void)
{
	int a;
	scanf("%d", &a); //입력 4
	printf("%d",factorial(a));
	return 0;
}