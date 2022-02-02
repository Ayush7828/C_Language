#include<stdio.h>
int main(){
    int num,small=9,remainder=0;
    printf("enter a number :");
    scanf("%d",&num);

    while (num>0)
    {
        /* code */
        remainder=num%10;
        if(remainder<small){
            small=remainder;
        }
        num=num/10;
       
    } printf(" small  number%d",small);
    return 0;
}