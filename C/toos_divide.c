/*公约数*/
#include <stdio.h>

int main()
{
	int a, b;
	int t;
	printf("请输入两个数: ");
	scanf("%d %d", &a, &b);
	
	while(b!=0){
		t = a % b;
		a = b;
		b = t;
	}
	printf("最大公约数为 %d", a);

	return 0;
}