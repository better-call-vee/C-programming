#include<stdio.h>
#include<string.h>
int main()
{
    char S[100];
    fgets(S, sizeof(S), stdin);
    puts(S);
    int length = strlen(S) - 1;
    int arr[length], h;
    for(int i=0; i<length; i++)
    {
        h = (int)(S[i]);
        arr[i] = h;
        h=0;
    }
    for(int i=0; i<length; i++)
    {
        printf("%d ", arr[i]);
    }

    int tmp2;
    for(int i=0; i<length; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(arr[j]>arr[i])
            {
                tmp2 = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp2;
            }
        }

    }
    printf("\n");
    for(int i=0; i<length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i=0; i<length; i++){
        printf("%c", arr[i]);
    }



return 0;
}

