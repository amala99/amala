/*数字位数*/
#include<stdio.h>
int main(void)
{
	int x;
	int n;
	printf("请输入一个整数: ");
	scanf("%d",&x);

	n=1;
	x /= 10;
	while(x>0){
		n++;
		x/=10;
	}
	printf("该数为 %d 位\n",n );
	return 0;
}