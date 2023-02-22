#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<N; i++){
        printf("%d - ", arr[i]);
        for(int j=0; j<i; j++) {
            printf("%d ", arr[j]);
        }
        for(int k=i+1; k<N; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
    return 0;
}
