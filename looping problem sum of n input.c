#include<stdio.h>
int main () {
    int n, w, i;
    int sum=0;
    printf("Enter the number of passengers: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &w);
        sum+=w;
    }
    printf("Total sum of weights = %d", sum);
    return 0;
}
