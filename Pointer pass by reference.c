#include<stdio.h>

void swap (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main () {
    int a=5, b=7;
    printf("a=%d, b=%d\n", a, b);

    swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

///array random index swapping
//#include<stdio.h>
//void swapitback(int L, int R, int arr[]) {
//    int tmp = *(arr+L-1);
//    *(arr+L-1) = *(arr+R-1);
//    *(arr+R-1) = tmp;
//}
//int main () {
//    int n, Q, L, R;
//    scanf("%d", &n);
//    int arr[n];
//    for(int i=0; i<n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &Q);
//    for(int i=0; i<Q; i++) {
//        scanf("%d %d", &L, &R);
//        swapitback(L, R, arr);
//    }
//    for(int i=0; i<n; i++) {
//        printf("%d ", arr[i]);
//    }
//}

//working the function by pointer only.
//no need of returning
