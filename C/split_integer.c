/*分离整数*/
#include <stdio.h>

int main()
{
	int d;
	int x;
	scanf("%d", &x);

	int mask = 1;
	int t = x;
	while (t > 9)
	{
		t /= 10;
		mask *= 10;
	}
	printf("x=%d,mask=%d\n", x, mask);
	do
	{
		d = x / mask;
		printf("%d\t", d);
		x %= mask;
		mask /= 10;
	} while (mask > 0);

	return 0;
}