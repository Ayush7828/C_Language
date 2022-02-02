#include<stdio.h>
int main(){
    int i=1,n,table;
    printf("enter a number  :");
    scanf("%d",&n);

    while (i<=10)
    {
        /* code */
        table=n*i;
        printf("\n%d\n",table);
        i++;
    }
    return 0;
}