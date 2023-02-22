#include<stdio.h>
void func(int x, int y, int *p, int *q)
{
    *p = x>y?x:y;  //if x is bigger than y, then *p=x. else *p=y
    *q = x<y?x:y;  //if else short form
}
int main ()
{
    int a=5, b=12;
    int large, small;

    func(a, b, &large, &small);

    printf("%d %d\n", large, small);
    return 0;
}
