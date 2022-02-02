#include<stdio.h>
int main(){
    int n;
    printf("Enter a sized of array:");
    scanf("%d",&n);
    printf("Enter a elements:");
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);

    }

    for (int i = 0; i < n-1; i++)
    {
        /* code */
        for (int j = i+1;  j<n; j++)
        {
            /* code */
            if(arr[i]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
        
    }
    
     for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",arr[i]);

    }
}