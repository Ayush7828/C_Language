#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a three sides:");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b&&b==c&&a==c){
        printf("This is equilateral triangle:\n");
    }

    else if(a==b||b==c&&c==a){
        printf("This is isoscles triangle:\n");
    }
    else {
        printf("This is scalene  triangle:\n");
    }
    return 0;
}