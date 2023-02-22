#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int *ptr;   //it creates array memory while running. doesn't waste extra memory
    //allocating memory for our need

    ptr = (int *) malloc(n*sizeof(int)); ///malloc keeps garbage value but
    //ptr = (int *) calloc(n, sizeof(int)); //calloc changes all the garbage value 0

    //here, (int *)is the type casting.
    if(ptr==NULL) //sometimes malloc can't allocate memory and exceeds. then it return NULL
    {
        printf("Memory Allocation Failed\n");
    }

    else
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d", (ptr+i));
        }

        for(int i=0; i<n; i++)
        {
            printf("%dth position -> %d\n", i+1, *(ptr+i));
        }
    }

    //sometimes, if you need to allocate extra memory, then you can reallocate

    //ptr = realloc(ptr, (n+5)*sizeof(int));

    free(ptr);//freeing memory
    return 0;
}
