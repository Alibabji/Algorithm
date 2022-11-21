//https://www.acmicpc.net/problem/9498

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	while (1)
	{
		scanf("%d", &a);
		if (a > 100)
		{
			printf("AN ERROR HAS OCCURED PLEASE TRY AGAIN!!");
			continue;
		}
		if (a >= 90 && a <= 100)
		{
			printf("A");
			break;
		}
		else if (a >= 80 && a <= 89)
		{
			printf("B");
			break;
		}
		else if (a >= 70 && a <= 79)
		{
			printf("C");
			break;
		}
		else if (a >= 60 && a <= 69)
		{
			printf("D");
			break;
		}
		else
		{
			printf("F");
			break;
		}
	}
	return 0;
}