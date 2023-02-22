#include<stdio.h>
int main () {
    int N, tmp;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(arr[j]<arr[i]){
               tmp = arr[i];
               arr[i] = arr[j];
               arr[j] = tmp;
            }
        }

    }
    for(int i=0; i<N; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

