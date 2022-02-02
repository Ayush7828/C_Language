#include<stdio.h>
int t(int n){
    for (int i = 1; i < 10; i++)
    {
        /* code */
        printf("%d\n",n*i);
    }
    
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int table=t(n);
    printf("%d",table);
}