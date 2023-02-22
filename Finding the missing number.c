#include<stdio.h>
int main () {
    int n, x;
    int arr[200001]; //array size will be given in the question
    scanf("%d", &n);

    for(int i=1;i<n;i++) {
        scanf("%d", &x);
        arr[x] = i;
    }

    for(int i=1;i<=n;i++) {
        if(arr[i]==0) {
            printf("the missing number is %d\n", i);
            break;
        }

    }

}
