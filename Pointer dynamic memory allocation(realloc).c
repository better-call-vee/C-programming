#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n;
    printf("Enter the main array size: ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *) malloc(n*sizeof(int));

    int l = n;
    if(ptr==NULL)
    {
        printf("Memory Allocation Failed.\n");
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d", (ptr+i));
        }
        for(int i=0; i<n; i++)
        {
            if(i<n-1)
            {
                printf("%d, ",*(ptr+i));
            }
            else printf("%d\n", *(ptr+i));
        }
    }
    printf("Before reallocating, address is : %p\n", ptr);
    printf("Enter the new size of n: ");
    int k;
    scanf("%d", &k);
    n = k;
    int *ptr2;
    ptr2 = realloc(ptr, n*sizeof(int));

    if(ptr2==NULL)
    {
        printf("Memory Allocation Failed.\n");
    }
    else
    {
        for(int i=l; i<n; i++)
        {
            scanf("%d", (ptr2+i));
        }
        for(int i=l; i<n; i++)
        {
            if(i<n-1)
            {
                printf("%d, ",*(ptr2+i));
            }
            else printf("%d", *(ptr2+i));
        }
        printf("\nAnd reallocated address is %p\n", ptr);
    }

    free(ptr);
    return 0;
}
