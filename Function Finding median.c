#include<stdio.h>
int find_median (int arr[], int n)
{
    int tmp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }

    }
    int median;
    if(n%2==0)
    {
        median = (arr[n/2-1] + arr[n/2])/2;
    }
    else
    {
        median = arr[n/2];
    }
    return median;
}
int main ()
{
    int n;
    scanf("%d ", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", find_median(arr, n));
    return 0;
}
