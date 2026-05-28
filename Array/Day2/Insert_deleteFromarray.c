#include<stdio.h>
int main()
{
    int row,col,oldrow=0,oldcol=0;
    printf("Enter the no of row & col: ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter value in arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nBefore inserting and deleting the elements\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int inserttype,insertindex;
    printf("Enter the inserttype (you enter 0 for row and 1 for column) & inserindex: ");
    scanf("%d %d",&inserttype,&insertindex);
    int newarr[row][col];
    if(inserttype==0)
    {
        row+=1;
        newarr[row][col];
        int newrow[col];
        for(int i=0;i<col;i++)
        {
            printf("Enter value in row[%d]: ",i);
            scanf("%d",&newrow[i]);
        }
        //appending row in the newarray
        for(int i=0;i<row;i++)
        {
            if(i==insertindex)
            {
                for(int j=0;j<col;j++)
                {
                    newarr[i][j]=newrow[j];
                }
            }
            else{
                for(int j=0;j<col;j++)
                {
                    newarr[i][j]=arr[oldrow][j];
                }
                oldrow+=1;
            }
        }
    }
    else{
        col+=1;
        newarr[row][col];
        int newcol[row];
        //make a new column
        for(int i=0;i<row;i++)
        {
            printf("Enter value of col[%d]: ",i);
            scanf("%d",&newcol[i]);
        }
        //appending the column in the new array
        for(int j=0;j<col;j++)//this loop for the column
        {
            if(j==insertindex)
            {
                for(int i=0;i<row;i++)
                {
                    newarr[i][j]=newcol[i];
                }
            }
            else{
                for(int i=0;i<row;i++)
                {
                    newarr[i][j]=arr[i][oldcol];
                }
                oldcol++;
            }
        }
    }
    printf("\n After inserting the row\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",newarr[i][j]);
        }
        printf("\n");
    }

    
    //now we making the logic of the deleting the elements from the array

    int deletetype,deleteposition;
    printf("if you want to delete row then press 0 otherwise press 1 for column and press the deleting postion: ");
    scanf("%d %d",&deletetype,&deleteposition);
    int delarr[row][col];//this array containing all elements after deleted elements
    if(deletetype==0)
    {
        printf("\nYou want to delete the row\n");
        row-=1;
        delarr[row][col];
        for(int i=0;i<row;i++)
        {
            if(i>=deleteposition)
            {
                for(int j=0;j<col;j++)
                {
                  delarr[i][j]=newarr[i+1][j];
                }
            }
            else{
                for(int j=0;j<col;j++)
                {
                    delarr[i][j]=newarr[i][j];
                }
            }
        }
    }
    else{
        printf("\nYou want to delete the column\n");
        col-=1;
        delarr[row][col];
        for(int j=0;j<col;j++)//this loop running for the column
        {
            if(j>=deleteposition)
            {
                for(int i=0;i<row;i++)
                {
                    delarr[i][j]=newarr[i][j+1];
                }
            }
            else{
                for(int i=0;i<row;i++)
                {
                    delarr[i][j]=newarr[i][j];
                }
            }
        }
    }
    printf("\n After deleting the row\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",delarr[i][j]);
        }
        printf("\n");
    }

}