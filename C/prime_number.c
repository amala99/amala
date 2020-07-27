#include <stdio.h>

int main()
{
    int m, n;
    int cnt=0;
    int i;
    int sum = 0;
    scanf("%d %d", &m, &n);
        if(m==1){
        m = 2;
    }
    for (i = m; i <= n;i++){
        int j=1;
        int k;
        for (k = 2; k < i-1;k++){
            if(i%k==0){
                j = 0;
                break;
            }
        }
         if(j){
        cnt++;
        sum += i;
     }
    }
   
        printf("%d %d", cnt, sum);
    return 0;
}