#include<stdio.h>
int main()
{
    //we are making the nxn matrix
    int n;
    printf("Enter the value of n bcz we are making square matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    //now we can take input of matrix elements
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the element of arr[%d]: ",i);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nthat this the original array\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //MAKING THE LOGIC TO TRANSPOSE THE MATRIX
    printf("\nTranspose of matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //NOW MAKING THE LOGIC TO ROTATE THE MATRIX
    printf("\nnow we rotate our matrix 90 degree\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
           int temp=arr[i][j];
           arr[i][j]=arr[i][n-j-1];
           arr[i][n-j-1]=temp; 
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}