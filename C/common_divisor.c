/*辗转相除法*/
#include <stdio.h>

int main()
{
	int a, b;
	int min;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		min = b;
	}
	else
	{
		min = a;
	}
	int rent = 0;
	int i;
	for (i = 1; i <= min; i++)
	{
		if (a % i == 0)
		{
			if (b % i == 0)
			{
				rent = i;
			}
		}
	}
	printf("%d & %d 的最大公约数为 %d", a, b, rent);

	return 0;
}