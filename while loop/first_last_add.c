#include<stdio.h>
int main(){
    int n,sum=0,first,last;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n>10){
        last=n%10;
    }
    while (n>=10)
    {
        /* code */
        n=n/10;
    }
    first=n;
    sum=first+last;
    printf("Sum of first and last number :%d",sum);
    return 0;
}