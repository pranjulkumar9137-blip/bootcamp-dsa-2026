#include<stdio.h>
int main(){
    int row,col,sum=0,max=0,max_row=0;
    printf("Enter the no of row & col: ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        sum=0;
        for(int j=0;j<col;j++)
        {
            printf("Enter value in arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
        if(sum>max)
        {
            max=sum;
            max_row=i;
        }
    }
    printf("\nBefore Removing largest row \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     printf("\nAfter removing largest row\n");
    for(int i=0;i<row-1;i++)
    {
        if(i>=max_row)
        {
            for(int j=0;j<col;j++)
            {
                printf("%d ",arr[i+1][j]);
            }
        }
        else{
            for(int j=0;j<col;j++)
            {
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
}