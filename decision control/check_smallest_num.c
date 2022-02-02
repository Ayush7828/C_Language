#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter any three number \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c){
        printf("first number is smallest \n");
    }

    else  if(b<a&&b<c){
        printf("second number is smallest \n");
    }
    else{
        printf("third number is greatest\n");
    }
    return 0;
}