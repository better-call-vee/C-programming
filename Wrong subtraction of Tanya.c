//A girl named Tanya does wrong subtraction. When the number contains 0 as the
//last digit, then she divides the number by 10 instead of subtracting.
//ex: from 50, she writes 5. from 510 she writes 51. but from 51 she calculates the
//actual value
#include<stdio.h>
int main () {
    int n, k, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter how many steps: ");
    scanf("%d", &k);
    for (i=1; i<=k; i++) {
        if(n%10==0) (n=n/10);
        else n--;
        printf("%dth step's answer: %d\n", i, n);
    }
    printf("Final answer = %d\n", n);
    return 0;
}
