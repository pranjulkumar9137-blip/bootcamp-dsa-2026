#include<stdio.h>
int main()
{
    int arr[10];
    int max=10/4,result;
    for(int i=0;i<10;i++)
    {
        printf("Enter value of arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    int freq[10]={0};
    //count all elements frequency
    for(int i=0;i<10;i++)
    {
        freq[arr[i]]+=1;
    }
    //now i print array and frequency array
    for(int i=0;i<10;i++)
    {
        if(freq[i]>max){
            max=freq[i];
            result=i;
        }
    }
    printf("%d",result);
    


}