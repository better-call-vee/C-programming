#include<stdio.h>
int main () {
    int i, j, n;
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        printf("#");
    }
    printf("\n");
    for(i=1; i<=(n-2); i++) {
        printf("#");
        for(j=1; j<=(n-2); j++) {
        printf(" ");
        }
        printf("#\n");
    }
    for(j=1; j<=n; j++) {
        printf("#");
    }
    printf("\n\n");

    printf("#\n##\n");
    for(i=1; i<=(n-3); i++) {
        printf("#");
        for(j=1; j<=i; j++) {
            printf(" ");
        }
        printf("#\n");
    }
    for(i=1; i<=n; i++) {
        printf("#");
    }
    printf("\n\v");

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        for(int l=1; l<=n; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
