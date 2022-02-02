#include<stdio.h>
int main(){
    int num;
    printf("Enter a char :");
    scanf("%d",&num);

    int age;
    printf("enter a age :");
    scanf("%d",&age);

    switch(num)
    {
        case 0:
        if(age>21){
            printf("Women Marriage:yes it is eligible for marriage ");

        } 
        else{
            printf("this is not eligible for marriage (women)");
        }
        break;


          case 1:
        if(age>25){
            printf("Man Marriage:");

        } 
        else{
            printf("this is not eligible for marriage(man)");
        }
        break;
        default:
        printf("Invaild choice :");

    }
    return 0;
}