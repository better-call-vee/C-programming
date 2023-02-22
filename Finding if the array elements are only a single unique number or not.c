#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];

    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    int q=1;
    for(int i=1; i<N; i++){
        if (arr[0]!=arr[i]) q++;
    }
    if(q==1) printf("YES");
    else printf("NO");


    return 0;
}
