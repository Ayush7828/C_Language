#include<stdio.h>
int main(){
    int i=2,n,fact=1;
    printf("enter a number :");
    scanf("%d",&n);
    while (i<=n)
    {
        /* code */
        fact=fact*i;
        i++;

    }
    printf("factorila %d",fact);
    return 0;
    
}