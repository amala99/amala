# include<stdio.h>
/*告诉编译器把 stdio.h 的内容包含在当前程序中.
stdio.h 提供键盘的输入和屏幕的输出*/

int main(void)
/*圆括号表明 main() 是一个函数名.
int 表明 main() 函数返回一个整数.
void 表明 manin() 不带任何参数.*/

{                                       //函数开始
    printf("Hello World\n");            //输出
    getchar();                          //执行窗口在用户按下 Enter键前暂停

    return 0;                           //返回值为 0
    
}                                       //函数结束