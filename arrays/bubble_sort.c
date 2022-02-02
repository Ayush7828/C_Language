#include<stdio.h>
int main(){
    int n;
    printf("enter a size of array");
    scanf("%d",&n);
    printf("Enter a elements:");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }
    int c=1;
    while (c<n-1)
    {
        /* code */
        for (int  i = 0; i < n-c; i++)
        {
            /* code */if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }
        }
        c++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
        /* code */
    }
    
}