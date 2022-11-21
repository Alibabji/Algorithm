//https://www.acmicpc.net/problem/1110

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num,newnum,secondnum,num2,num3,num4;
	scanf("%d", &num); //26
	int i = 1;
	newnum = num % 10;//1의자리 6
	secondnum = num/10;//10의자리 2
	num2 = newnum + secondnum;//2번째 수 8
	num3 = num2 % 10;//2번째 수 1의자리 8
	num4 = newnum * 10 + num3;//68
	if (num4 == num) //건너뛰고
	{
		printf("%d", i);
		return 0;
	}
	while (true)
	{
		newnum = num4 % 10; //8 - 4 - 2
		secondnum = num4 / 10; //6 - 8 - 4
		num2 = newnum + secondnum;//14 - 12 - 6
		num3 = num2 % 10;//4 - 2 - 6
		num4 = newnum * 10 + num3;//84 - 42 - 26
		i++;//2 - 3 - 4
		if (num4 == num)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}