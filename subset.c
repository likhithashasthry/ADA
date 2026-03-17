#include<stdio.h>
void subset_sum(int a[],int n, int givensum)
{
    int i,j,sum;
    int start=-1;
    int end=-1;
    for(i=0;i<n;i++)
    {
        sum=a[i];
        if(sum==givensum)
        {
            printf("element of subset:%d",a[i]);
            break;
        }
        else
        {
        for(j=i+1;j<n;j++)
        {
            sum=sum+a[j];
            if(sum==givensum)
            {
                start=i;
                end=j;
                break;

            }
            else if(sum>givensum)
            {
                break;
            }
            else{
                continue;
            }
        }
        if(start>-1 && end>-1)
        {
            printf("element of subset: ");
            printf("[");
            for(i=start;i<=end;i++)
            {
                printf("%d ",a[i]);
            }
            printf("]");
        }
    }
    }
}
void main()
{
    int n,i,givenSum;
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements into the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the sum:");
    scanf("%d",&givenSum);
    subset_sum(arr,n,givenSum);


}