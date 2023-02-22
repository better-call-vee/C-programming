#include<stdio.h>
int main () {
    int N, q;
    printf("Input array size: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the array elements: ");
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter how many queries: ");
    scanf("%d", &q);
    int b, v;
    for(int i=0; i<q; i++) {
        printf("Enter which index and how much value: ");
        scanf("%d %d", &b, &v);
        arr[b]+=v;
    }
    for(int i=0; i<N; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
