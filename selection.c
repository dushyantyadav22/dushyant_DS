#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("/n ");
}
void selection_sortt(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int main()
{
    int arr[]={5,4,3,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    selection_sortt(arr,n);
    display(arr,n);
}
