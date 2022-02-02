#include<stdio.h>
int sqr(int num){

    return num*num;

}

int main(){
    int number;
    printf("Enter a value of number:");
    scanf("%d",&number);

    printf("Square =%d",sqr(number));
    return 0;
}