//https://www.acmicpc.net/problem/2460

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int	ppl_total, ppl_add, ppl_subtract, ppl_mid,ppl_most=0;
	scanf("%d %d", &ppl_subtract, &ppl_add);
	for (int i = 0, ppl_total = ppl_add; i < 9; i++)
	{
		scanf("%d %d", &ppl_subtract, &ppl_add);
		ppl_mid = ppl_total - ppl_subtract;
		if (ppl_most <= ppl_mid) ppl_most = ppl_mid;
		ppl_total = ppl_mid + ppl_add;
		if (ppl_most <= ppl_total)ppl_most = ppl_total;
	}
	printf("%d", ppl_most);
    return 0;
}

