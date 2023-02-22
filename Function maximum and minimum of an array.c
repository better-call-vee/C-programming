//#include<stdio.h>
//void find_max_min (int n, int nums[], int *p, int *q) {
//    *p = nums[0];
//    *q = nums[0];
//    for(int i=0; i<n; i++) {
//        if(nums[i]>*p) *p=nums[i];
//        if(nums[i]<*q) *q=nums[i];
//    }
//}
//
//int main () {
//    printf("Enter the size of the array: ");
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//    for(int i=0; i<n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    int maxx, minn;
//    find_max_min(n, arr, &maxx, &minn);
//
//    printf("%d %d\n", maxx, minn);
//    return 0;
//}

#include<stdio.h>
void find_max_min (int n, int nums[], int p, int q) {
    p = nums[0];
    q = nums[0];
    for(int i=0; i<n; i++) {
        if(nums[i]>p) p=nums[i];
        if(nums[i]<q) q=nums[i];
    }
    printf("%d %d", p, q);
}

int main () {
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxx=0, minn=0;
    find_max_min(n, arr, maxx, minn);

    return 0;
}
