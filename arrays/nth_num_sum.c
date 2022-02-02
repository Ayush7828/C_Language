#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    int arr[n];

    for (int  i = 1; i<n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);

    }

    for (int  i = 1; i<n; i++)
    {
        /* code */
        sum=sum+arr[i];
      

    }
      printf("%d",sum);
    
    return 0;
    
    
}