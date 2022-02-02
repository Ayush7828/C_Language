#include<stdio.h>
int main(){
    int n,sum=0,rem=0;
    printf("Enter a number :");
    scanf("%d",&n);

    while (n>0)
    {
        /* code */
        rem=n%10;
        sum=sum+rem;
        if(sum>9&&n==0){
            n=sum;
            sum=0;
        }
        n=n/10;
    }
    printf("Sum os digits %d",sum);
    return 0;
    
}