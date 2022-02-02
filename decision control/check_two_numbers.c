#include<stdio.h>
int main(){
    int a,b;
    printf("enter a two numbers \n");
    scanf("%d%d",&a,&b);

    if(a>b){
        printf("a is greater than b\n");
    }if(b>a){
        printf("b is greater than a\n");
    }if(b==a){
        printf("Both are equal\n");
    }
    return 0;
}