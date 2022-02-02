#include<stdio.h>
int main(){
    int num,large=0,remainder=0;
    printf("enter a number :");
    scanf("%d",&num);

    while (num>0)
    {
        /* code */
        remainder=num%10;
        if(remainder>large){
            large=remainder;
        }
        num=num/10;
       
    } printf(" large number%d",large);
    return 0;
}