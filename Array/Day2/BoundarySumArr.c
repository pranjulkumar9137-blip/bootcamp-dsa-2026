#include<stdio.h>
int main()
{
    int row,col,sum=0;
    printf("Enter the no of row & col: ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter value in arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
            if(i==0||j==col-1||j==0||i==row-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("\nmatrix print\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe sum of all boundary elelments are %d ",sum);
}