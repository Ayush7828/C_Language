#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int fact=1;

    for (int  i = 2; i <=n; i++)
    {
        /* code */
        fact=fact*i;
        printf("%d\n",fact);
    }
    
    return 0;
}