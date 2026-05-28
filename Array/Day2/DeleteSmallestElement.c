#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col,min=__INT_MAX__;
    printf("Enter the no of row & col: ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter value in arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    printf("\nBefore deleting the elements\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //now we are making to delete smallest element
   printf("\nAfter deleting the elements\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==min)
            {
               
            }
            else{
                printf("%d ",arr[i][j]);

            }
        }
        printf("\n");
    }
}