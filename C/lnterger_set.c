/*整数集*/
#include <stdio.h>

int main()
{
	int a;
	int cnt = 0;
	int i=0, j=0, k=0;
	scanf("%d", &a);

	i = a;
	while (i <= a + 3)
	{
		j = a;
		while (j <= a + 3)
		{
			k = a;
			while (k <= a + 3)
			{
				if (i != k && i != j && k != j)
				{
					cnt++;
					printf("%d%d%d", i, j, k);
					if (cnt == 6)
					{
						printf("\n");
						cnt = 0;
					}
					else
					{
						printf(" ");
					}
				}

				k++;
			}
			j++;
		}
		i++;
	}
	return 0;
}