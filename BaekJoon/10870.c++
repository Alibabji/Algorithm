//https://www.acmicpc.net/problem/10870

	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	int pbnj(int a)
	{
		if (a == 0) return 0;
		else if (a == 1) return 1;
		return pbnj(a-1)+pbnj(a-2);
	}
	int main(void)
	{
		int a;
		scanf("%d", &a);
		printf("%d", pbnj(a));
		return 0;
	} 