#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number :");
    
    scanf("%d",&n);
   

    for (int  i = 1; i < n; i++)
    {
        /* code */
        if(n%2==0){
            printf("Non prime \n");
            count =1;
            break;

        }
    }
    if(count==0)
    {
        printf("Prime number"); 

    }
    return 0;
    
}