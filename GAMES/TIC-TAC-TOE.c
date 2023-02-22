#include<stdio.h>
#include<stdbool.h>
void printCell(int a[][4], int n)   //to pass a 2D array, we need to send the column
{
    //size only. and it can't be dynamic, has to be a number(static array)
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j] == -1) printf(" ");//we don't want to show the value -1
            if(a[i][j] == 1) printf("X");//assigning 1 for (X)
            if(a[i][j] == 2) printf("O");//assigning 2 for (O)
            if(j<n) printf("\t|\t");//organizing with space
        }
        printf("\n");
        if(i<n) printf("___________________________________");
        //we don't need to print this line in the end. looks bad.
        printf("\n\n"); //adjusting
    }
}

int isWin(int a[][4], int n)
{
    for(int i=1; i<=n; i++)
    {
        if(a[i][1]==a[i][2] && a[i][2]==a[i][3] && a[i][1]!=-1)
//horizontally means row. if row elements are same and none of them are -1 then
//it will be a winner either 1 or 2. if one item is not -1, the other ones won't
//be too because they all are the same
        {
            return a[i][1];
        }
    }
    for(int j=1; i<=n; i++)
    {
        if(a[1][j]==a[2][j] && a[2][j]==a[3][j] && a[1][j]!=-1)
        {
            return a[1][j]; //vertically
        }
    }
    if(a[1][1]==a[2][2] && a[2][2]==a[3][3] && a[1][1]=-1)
    {
        return a[1][1]; //diagonally
    }
    if(a[1][3]==a[2][2] && a[2][2]==a[3][1] && a[1][3]!=-1)
    {
        return a[1][3];
    }
    return -1;//else we have to return -1. means drawn
}

int main ()
{
    int n=3;
    int a[4][4];//4 because 0 1 2 3. we will waste 0 index row and column to adjust
    //make easier the input process
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            a[i][j]=-1;
        }
    }

    bool player1 = true;
    bool player2 = false;
    while(true)
    {
        printCell(a, n); //printing before taking the inputs
        if(player1 == true)
        {
            int r, c; //we have to declare before the flag door. because everytime
            //you can't separately declare the same thing
Flag:
            printf("Player 1 Turn (X), Enter Row & Column : ");
            scanf("%d %d", &r, &c);
            if(a[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag;
            }
            a[r][c] = 1;
            player1 = false;//ending his turn and making player 2 true
            player2 = true;
        }
        else
        {
            int r, c;
Flag2:
            printf("Player 2 Turn (O), Enter Row & Column : ");
            scanf("%d %d", &r, &c);
            if(a[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag2;
            }
            a[r][c] = 2;
            player2 = false;
            player1 = true;
        }
        if(isWin(a,n)==1)
        {
            printf("Player 1 Won!\n");
            printCell(a, n);
            break;
        }
        else if(isWin(a,n)==2)
        {
            printf("Player 2 Won!\n");
            printCell(a, n);
            break;
        }
    }
    return 0;
}
