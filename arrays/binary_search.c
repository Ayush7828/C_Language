#include<stdio.h>
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n;
    while (start<end)
    {
        /* code */
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
    }
    return -1;
}
int main(){
    int n;
    printf("Enter a size of array :\n");
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter a key:");
    scanf("%d",&key);

    printf("%d",binarysearch(arr,n,key));
    return 0;
    
}