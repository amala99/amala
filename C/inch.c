/*��λ����*/
#include <stdio.h> 
int main(void)

{
    double inch; 
    double cm;
    printf("������Ӣ��");
    scanf("%lf", &inch);

    cm = inch *2.54;
    printf("��Ӣ��Ϊ %.3lf ����", cm);

    return 0;
}                                       