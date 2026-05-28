#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        printf("Enter the value of arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nNormal array\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    int prefixsum[n+1];
    prefixsum[0]=0;
    int sum1=0;
    for(int i=1;i<=n;i++)
    {
        sum1=sum1+arr[i];
        prefixsum[i]=sum1;
    }
    printf("\nPrefix sum array\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",prefixsum[i]);
    }
    int right,left;
    printf("\nEnter the value of range right to left: ");
    scanf("%d %d",&right,&left);
    int sum=prefixsum[right]-prefixsum[left-1];
    printf("The sum is %d",sum);
}