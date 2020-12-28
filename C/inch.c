/*单位换算*/
#include <stdio.h> 
int main(void)

{
    double inch; 
    double cm;
    printf("请输入英寸");
    scanf("%lf", &inch);

    cm = inch *2.54;
    printf("该英寸为 %.3lf 厘米", cm);

    return 0;
}                                       