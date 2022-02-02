#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    for (int  i = 1; i <=10; i++)
    {
        /* code */
        int t=n*i;
        printf("print table  %d\n",t);
    }
    return 0;
}