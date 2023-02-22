//there will be n participants in a competition. And you will be given kth
//position's number as the boundary line. Anyone scoring more than that will be
//qualifying for the next round. You have to count the qualifying contestant's
//number.
#include<stdio.h>
int main () {
    int n, k, i;
    scanf("%d %d", &n, &k);
    int arr[55]; //range was given in the question. 50
    for(i=1; i<=n; i++) {
        scanf("%d", &arr[i]);
    }
    int ans = 0;
    for(i=1; i<=n; i++) {
        if(arr[i]>=arr[k] && arr[i]>0) ans++; //if the score is 0, it'll not be counted
    }
    printf("%d", ans);
    return 0;
}
