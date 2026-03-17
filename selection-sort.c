#include<stdio.h>
void selectionSort(int a[],int array_size)
{
    int temp=0;
    for(int i=0;i<array_size;i++)
    {
        for(int j=i+1;j<array_size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted Array:");
    for(int i=0;i<array_size;i++)
    {
        printf("%d ",a[i]);
    }


}
void main()
{
    int n,i,j;
    printf("enter number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements into the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);


}