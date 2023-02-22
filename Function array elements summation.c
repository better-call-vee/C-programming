#include<stdio.h>
int add_them(int n, int nums[]) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += nums[i];
    }
    return sum;
}

int main () {
    int z;
    scanf("%d ", &z);
    int arr[z];
    for(int i=0; i<z; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = add_them(z, arr);
    printf("%d\n", sum);
}
