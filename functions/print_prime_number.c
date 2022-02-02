#include<stdio.h>
#include<limits.h>

int isprime(int num){
    for (int i = 2; i < num; i++)
    {
        /* code */
        if(num%i==0)
        return false;
    }
    return true;

    
}
int main(){
    int a,b;
    printf("Enter a number:");
    scanf("%d%d",&a,&b);
    for (int i = a; i < b; i++)
    {
        /* code */
        if(isprime(i)==true){
            printf("%d",i);
        }
    }
    return 0;
}