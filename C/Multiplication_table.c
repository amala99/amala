/*九九乘法表*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i=1, j=1;
    while(i<=n){
        j = 1;
        while(j<=i){
            printf("%d*%d=%-4d", j, i, i * j);
            j++;
            if(i+1==j){
                printf("\n");
            }
        }
        i++;
    }
    return 0;
}