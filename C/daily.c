
#include <math.h>
#include <stdio.h>

int main(void)
{
    int n;
    int score;
    int count = 0;
    double sum = 0.0;
    double ave;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score);
        sum += score;
        if (score >= 60)
            count += 1;
    }
    ave = n != 0 ? sum / n : 0;
    printf("average = %.1lf\n", ave);
    printf("count = %d", count);
    return 0;
}