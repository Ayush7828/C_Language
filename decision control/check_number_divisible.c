#include<stdio.h>
int main(){
    int num;
    printf("enter a numeber :\n");
    scanf("%d",&num);
    if(num%5==0||num%11==0){
        printf("This is divisble by and :\n");
    }
    else{
        printf("Not divisible by and \n");
    }
    return 0;
}