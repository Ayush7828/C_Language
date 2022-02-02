#include<stdio.h>
int linearsearch(int arr[],int n,int key){
    
    for (int  i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
    
}
int main(){
    int n;
    printf("enter a size of array:\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter a item:");
    scanf("%d",&key);
    printf("%d",linearsearch(arr,n,key));
    
}