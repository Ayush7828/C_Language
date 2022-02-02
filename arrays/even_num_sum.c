#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter a size :");
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i<n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    for (int  i = 0; i<n; i++)
    {
        /* code */
        if(arr[i]%2==0){
            sum+=i;
        }
    }
    printf("even number :%d",sum);
    return 0;
    
}