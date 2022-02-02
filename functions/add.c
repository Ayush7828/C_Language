#include<stdio.h>
int add(int num1,int num2){
    return num1+num2;
}
int main()
{
    int a,b;
    printf("Enter a value of A and B:");
    scanf("%d%d",&a,&b);

    printf("Sum =%d",add(a,b));
    return 0;
}