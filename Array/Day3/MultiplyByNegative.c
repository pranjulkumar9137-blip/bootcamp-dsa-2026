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
            printf("Enter the value in arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nafter multiply by -1\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
          if(i%2==0)
          {
            arr[i][j] *=-1;
          }
          else{
            arr[i][j]=arr[i][j];
          }
        }
    }
    printf("\nBefore multiply by -1\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //now we making the reverse logic
    printf("\nreversed array\n");
    for(int i=row-1;i>=0;i--)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}