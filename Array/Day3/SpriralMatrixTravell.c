//in this program we create a matrix and we travell all element in clockwise that is spiral travel
#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the value of row and column: ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    //enter all the element in the array
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter element in arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nOriginal matrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nSpiral Matrix travell\n");
    //we can create 4 pointer for travell
    int top=0;      //this pointer for the first row
    int bottom=row-1; //this pointer for the last row
    int left=0;  //this pointer for the first column
    int right=col-1; //this pointer for the last column
    while(top<=bottom && left<=right)
    {
        //for printing the first row
        for(int i=left;i<=right;i++)
        {
            printf("%d ",arr[top][i]);
        }
        top++;
        //for the printin last column
        for(int i=top;i<=bottom;i++)
        {
            printf("%d ",arr[i][right]);
        }
        right--;
        //for printing the last row
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                printf("%d ",arr[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--)
            {
                printf("%d ",arr[i][left]);
            }
            left++;
         }
    }
}