#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter a num1 and num2 :=");
    scanf("%d%d",&num1,&num2);

    if(num1<num2){
        printf("first number is smaller\n");
    }

else if(num1>num2){
        printf("first number is greater\n");
    }
    else{
        printf("Equal numbers\n");
    }
    return 0;
     
}