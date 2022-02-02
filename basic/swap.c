#include<stdio.h>
int main(){
    int a,b;
    printf("enter a value of a and b\n");
    scanf("%d%d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("print after swapping\n%d\n",a);
    printf("print after swapping\n%d\n",b);
    return 0;
}