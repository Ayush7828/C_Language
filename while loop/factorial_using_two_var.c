#include<stdio.h>
int main(){
    int n,fact=1;
    printf(
        "Enter a number :"
    );
    scanf("%d",&n);

    while (n>0)
    {
        /* code */
        fact=fact*n;
        n--;
    }
    printf("factorial using two variables :%d",fact);
    return 0;
    
}