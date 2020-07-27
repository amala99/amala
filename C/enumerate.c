/*枚举*/
#include <stdio.h>

int main()
{
    int x;
    int one, two, five;
    printf("请输入数字: ");
    scanf("%d", &x);

    int exit=1;

    for (one = 0; one < x * 10; one++)
    {
        for (two = 0; two < x * 10 / 2; two++)
        {
            for (five = 0; five < x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("可以用 %d 个一角加 %d 个两角加 %d 个五角换 %d 元\n", one, two, five, x);
                    exit++;
                    break;
                }
            }
            if(exit>5)
                break;
        }
        if(exit>5)
            break;
    }

    return 0; 
}