///For matrix multiplication,
///First matrix's number of column has to be the same as the second matrix's
///number of rows. 1C=2R

#include<stdio.h>
int main ()
{
    int first[10][10], second[10][10], result[10][10], r1, r2, c1, c2, i, j, k;
    int sum = 0;

    printf("Enter rows and columns for the first matrix : ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the second matrix : ");
    scanf("%d %d", &r2, &c2);

    while(c1!=r2)
    {
        printf("Error !! Column of 1st matrix is not equal to row of 2nd matrix");

        printf("\n\nEnter rows and columns for the first matrix again : ");
        scanf("%d %d", &r1, &c1);

        printf("Enter rows and columns for the second matrix again : ");
        scanf("%d %d", &r2, &c2);
    }


    ///First matrix
    printf("\nEnter elements for the First Matrix\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d] = ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    ///Second matrix
    printf("\nEnter elements for the Second Matrix\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d] = ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    ///printing first matrix
    printf("\nFirst Matrix\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }

    ///printing second matrix
    printf("\nSecond Matrix\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }

    ///1st matrix's row into 2nd matrix's column
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k] * second[k][j]; ///run the program and match these statements
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    ///printing result matrix
    printf("\nResult Matrix\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
