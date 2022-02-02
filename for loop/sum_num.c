#include<stdio.h>
int main(){
    int sum=0;
    for (int i = 0; i <= 10; i++)
    {
        /* code */sum=sum+i;
        printf("%d\n",i);
    }
    printf("Sum of n naturl number %d\n",sum);
    return 0;
}