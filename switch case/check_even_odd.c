#include<stdio.h>
int main(){
    int num;
    printf("enter a number :\n");
    scanf("%d",&num);
    switch (num%2)
    {
    case 0:
    printf("even number \n");
        break;
    case 1:
    printf("odd number \n");
    break;
    default:
    printf("Wrong choice ");
        break;
    }
}