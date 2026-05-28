#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the value of row and column: ");
    scanf("%d %d",&row,&col);
    //making a matrix
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter the vlaue of arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nBefore reverse the row\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nafter reverse the row\n");
    //now we are reversing the each row
    for(int i=0;i<row;i++)
    {
        for(int j=col-1;j>=0;j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}