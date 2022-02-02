#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a three number :\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("first number  is greater ");
    }
    else if(b>a&&b>c){
        printf(" second number is greater ");
    }
    else{
        printf("third numebr  is greater ");
    }
    return 0;
}