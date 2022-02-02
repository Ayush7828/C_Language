#include<stdio.h>
int main(){
    int num;
    printf("enter  number :\n");
    scanf("%d",&num);

    if(num<0){
        printf("it is negative \n");
    }
    if(num>0){
        printf("it is positve number\n");

    }
    return 0;
}