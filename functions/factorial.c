#include<stdio.h>
int fact(int n){
    int factorial=1;
    for (int i = 1; i<=n; i++)
    {
        /* code */
        factorial=factorial*i;

    }
    return factorial;
    
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int ans=fact(n);
    printf("Factorial of this number :%d",ans);
}