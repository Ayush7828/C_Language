#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter a three number: \n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num2>num1&&num1>num2||num3>num1&&num1>num2){
        printf("%d\n num1 is miidle",num1);
    }
    else if(num1>num2&&num2>num3||num3>num2&&num2>num3){
        printf("%d\n num2 is miidle",num2);
    }
    else if(num1>num3&&num3>num2||num2>num3&&num3>num1)
     {
        printf("%d\n  num3 is middle",num3);
    }
    return 0;
}