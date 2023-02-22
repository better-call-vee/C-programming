#include<stdio.h>
int find_gcd(int x, int y)
{
    for(int i=x; i>=1; i--)
    {
        if(x%i==0 && y%i==0)
        {
            return i;
        }
    }
}
int find_lcm(int x, int y) {
    return ((x*y)/(find_gcd(x, y)));
}
int primality_check (int x) {
    if(x==1) return 2;
    else if(x==2) return 1;
    for (int i=2; i<x; i++) {
        if(x%i==0) {
            return 0;
        }
    }
    return 1; // if the loop survives
}

int main ()
{
    int a, b, ans;
    scanf("%d %d", &a, &b);
    ans = find_gcd(a, b);
    printf("The gcd of %d and %d is %d\n", a, b, ans);
    printf("\v");
    printf("The lcm of %d and %d is %d\n", a, b, find_lcm(a,b));
    int c, i;
    scanf("%d", &c);
    i = primality_check(c);
    if(i==1) printf("%d is a prime number\n", c);
    else if(i==0) printf("%d is a composite number\n", c);
    else if(i==2) printf("1 is not a prime or composite number\n");


}
