
#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    int sum;
    scanf("%d", &sum);
    int q=1;
    for(int i=0; i<N; i++){
        for(int j=0; j<i; j++) {
            if(arr[j]+arr[i]==sum) q++;
        }
        for(int j=i+1; j<N; j++) {
            if(arr[j]+arr[i]==sum) q++;
        }
    }
    if(q==1) printf("NO");
    else printf("YES");

    return 0;
}
//Write a C program to take one positive integer N, the size of an array of unique values as input. Then take an
//integer array of size N as input. After that take another integer target. You need to tell if you can make target by
//adding any two different values from that array.
