#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
  int m, n;

  scanf("%d %d", &m, &n);
  if (narcissistic(m))
    printf("%d is a narcissistic number\n", m);
  PrintN(m, n);
  if (narcissistic(n))
    printf("%d is a narcissistic number\n", n);

  return 0;
}

int narcissistic(int number)
{
  int n=0;
  int first = 1;
  int i = 1;
  while (i < n)
  {
    first *= 10;
    i++;
  }

  i = first;
  while (i < first * 10)
  {
    int t = i;
    int sum = 0;
    do
    {
      int d = t % 10;
      t /= 10;
      int p = d;
      int j = 1;
      while (j < n)
      {
        p *= d;
        j++;
      }
      sum += p;

    } while (t > 0);
    if (sum == i)
    {
      printf("%d\n", i);
    }
    i++;
  }
}