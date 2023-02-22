#include<stdio.h>
#include<limits.h>
int main ()
{

    int n;
    printf("Enter the size of an array: ");
    scanf("%d ", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN; //it's the best way to find maximum
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    int freq[max + 1];
    for(int i=0; i<=max; i++)
    {
        freq[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        freq[arr[i]]++;
    }
    for(int i=0; i<=max; i++)
    {
        if(freq[i] != 0)
        {
            for(int j=1; j<=freq[i]; j++)
                printf("%d ", i);
        }
    }
    return 0;
}
