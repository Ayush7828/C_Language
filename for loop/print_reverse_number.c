#include<stdio.h>
int main(){
    int n;
    
    printf("enter a value\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}