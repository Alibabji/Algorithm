//https://www.acmicpc.net/problem/2460

#include <stdio.h>
int main()
{
	int people = 0;
	int max_people = 0;
	for (int i = 0; i < 10; i++)
	{
		int get_out, get_in;
		scanf("%d %d", &get_out, &get_in);
		people += get_in;
		people -= get_out;
		max_people = (max_people < people) ? people : max_people;
	}
	printf("%d", max_people);
	return 0;
}