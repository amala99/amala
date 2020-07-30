#include <stdio.h>

int isprime(int x, int knownprimes[], int number0);
int main(void)
{
    const int number = 100;
    int prime[number] = {2};
    int count = 1;
    int i = 3;
    while (count < number)
    {
        if (isprime(i, prime, count))
        {
            prime[count++] = i;
        }
        i++;
    }
    for (i = 0; i < number; i++)
    {
        printf("%d", prime[i]);
        if ((i + 1) % 5)
            printf("\t");
        else
            printf("\n");
    }
    return 0;
}

int isprime(int x, int knownprimes[], int number0)
{
    int ret = 1;
    int i;
    for (i = 0; i < number0; i++)
    {
        if (x % knownprimes[i] == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}