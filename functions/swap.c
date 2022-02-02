#include<stdio.h>
int swap(int num1,int num2){
    int temp=num1;
    num1=num2;
    num2=temp;

    printf("After swapping a=%d,b=%d\n",num1,num2);
}
int main(){
    int a,b;
    printf("Enter a value of A and B:");
    scanf("%d%d",&a,&b);
    swap(a,b); 
    return 0;
}