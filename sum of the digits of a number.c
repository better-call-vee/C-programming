#include<stdio.h>
int main ()
{
  int m, n;
  int sum=0;
  printf("Enter a number: ");
  scanf("%d", &n);
  int last_digit;
  while (n>0)
  {
      m=n%10;
      sum+=m;
      n=n/10;
  }
  printf("Sum is = %d", sum);
  return 0;
}
