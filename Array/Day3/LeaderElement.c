//In the array leader element whose element greater than all the right side available element 
//Last element is always a leader element because in right side no any element is available
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    //now we are take the input of element inside the array
    for(int i=0;i<n;i++)
    {
        printf("Enter the element in arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nOriginal Array Printed\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    //we initiate the leaders element to the last element of the array by default
    int leader=arr[n-1];
    printf("\n\nAll leaders element present in the array\n");
    printf("%d ",leader);
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>leader)
        {
            leader=arr[i];
            printf("%d ",leader);
        }
    }
    
}
