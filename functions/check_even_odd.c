#include<stdio.h>
int check(int number){
    if(number%2==0){
        printf("This is a even number ");

    }
    else{
        printf("This is a odd number ");
        
    }
}
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);

      check(number);
      return 0;
}