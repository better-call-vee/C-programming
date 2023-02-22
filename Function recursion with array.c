#include<stdio.h>
int solve(int ar[], int i, int n)
{
    if(i==n) return 0;
    int s = solve(ar, i+1, n);
    return s+ar[i];
}
int pointersum(int ar[], int n)
{
    if(n==0) return 0;
    int s=pointersum(ar+1, n-1);
    return s+*(ar); //ar[0] -> *(ar)
    //this ar[0] only holds one value
}

int lastdigitsum(int ar[], int n)
{
    if(n==0) return 0;
    int s = lastdigitsum(ar+1, n-1);
    return s + (*(ar)%10);
}



int main ()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int s = solve(ar, 0, n);
    int s2 = pointersum(ar, n);
    printf("Normal array calculation: %d\nWith pointer: %d\n", s, s2);
    printf("The sum of their last digits: %d", lastdigitsum(ar, n));
    return 0;

}
