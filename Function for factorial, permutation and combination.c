#include<stdio.h>
#include<math.h>

int facto(int x);

int main ()
{
    printf("Enter n & r : ");
    int n, r;
    scanf("%d %d", &n, &r);
    printf("Factorial = %d\n", facto(n));
    int perm = facto(n) / facto(n-r);
    int comb = facto(n) / (facto(n-r)*facto(r));
    printf("Permutation (nPr) = %d\nCombination (nCr) = %d\n", perm, comb);
    return 0;
}

int facto(int x)
{
    int dodo=1; //if I implement 0 here, it will be a mistake multiplying with 0
    for(int i=1; i<=x; i++)
    {
        dodo *= i;
    }
    return dodo;
}
