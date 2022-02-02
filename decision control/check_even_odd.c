#include<stdio.h>
int main(){
    int number;
    printf("enter a number \n");
    scanf("%d",&number);

    if(number%2==0){
        printf("This is even numeber :\n");

    }
    else{
        printf("This is odd number :\n");
    }
    return 0;
}