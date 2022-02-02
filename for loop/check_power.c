#include<stdio.h>
int main(){
    int number,exponent;
    long power=1;
    printf("enter a number and exponent:");
    scanf("%d%d",&number,&exponent);
     
     for (int  i = 1; i < exponent; i++)
     {
         /* code */
         power=power*number;

     }
     
    printf("print anser %d %d=%ld",number,exponent,power);
    return 0;
}