#include<stdio.h>
int main () {
    int i, j, n;
    float x, sum, avg;
    printf("Enter the number of the students: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        printf("\nEnter the marks of %dth student: ", i);
        sum = 0;
        for(j=1; j<=3; j++) {
        scanf("%f", &x);
        sum += x;
        }
        printf("Average = %f\n", sum/3);
    }
    return 0;
}
