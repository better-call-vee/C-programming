#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int sorted_arr[n];
    int max = 999;
    for(int i=0; i<n; i++)     ///elements have to be less than 999
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    int min, m_ind;

    for(int j=0; j<n; j++)
    {
        min = arr[0];
        m_ind = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
                m_ind = i;
            }
        }
        ///suppose max = 999
        sorted_arr[j] = min;   ///we have to replace the minimum number with
        ///a big number so that we can find the next minimum number sorting
        arr[m_ind] = max+1;
        for(int i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

    }
    printf("SORTED ARRAY: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", sorted_arr[i]);
    }
    return 0;
}
