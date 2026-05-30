//in this problem we have to fing the longest subarray which have all right element in increase by 1
/* for example
   arr[]={1,2,3,1,2,3,4,5,2,3}
   three substring available
   first={1,2,3} length=3*
   second={1,2,3,4,5} length=5
   Third={2,3} length=2
   if(arr[i]==arr[i-1]+1)
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    //input element of array
    for(int i=0;i<n;i++)
    {
        printf("Enter the element arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nPrint original array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int maxlength=1;
    int curentlength=1;
    printf("\nsubstring and length\n");
    printf("%d ",arr[0]);
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1]+1)
        {
            curentlength++;
            printf("%d ",arr[i]);
        }
        else{
            printf("----> %d\n",curentlength);
            printf("%d ",arr[i]);//this line for print first element of second subarray 
            curentlength=1;
        }
        if(curentlength>maxlength)
        {
            maxlength=curentlength;
        }
    }
    printf("----> %d\n",curentlength);//this line print current length of last subarray
    printf("\nFinal maximum length of subarray is %d",maxlength);
}