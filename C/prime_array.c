#include <stdio.h>

int main(void)
{
    double sum;
    sum = 0;
    int m, n;
    scanf("%d %d", &m,&n);

    for (int i = m; i <= n;i++){
        sum += i * i + 1 / i;
    }
    printf("sum = %.6f", sum);

    return 0;
}
