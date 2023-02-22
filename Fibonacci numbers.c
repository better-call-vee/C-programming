#include<stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int arr[N];
    arr[0] = 0;
    arr[1] = 1;
    printf("%d %d ", arr[0], arr[1]);
    for(int i=2; i<=N; i++){
        arr[i] = arr[i-1] + arr[i-2];
        printf("%d ", arr[i]);
    }
    return 0;
}

