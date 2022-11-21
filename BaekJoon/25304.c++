//https://www.acmicpc.net/problem/25304

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int total,repeat,product,num,addup=0;
	scanf("%d %d", &total,&repeat);
	for (int i = 0; i < repeat; i++)
	{
		scanf("%d %d", &product, &num);
		addup += product * num;
	}
	if (addup == total)printf("Yes");
	else printf("No");
}