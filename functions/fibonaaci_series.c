#include<stdio.h>
int fibonacci(int n){
    int t1=0;
    int t2=1;
    int t3;
    for (int  i = 0; i <=n; i++)
    {
        /* code */
        t3=t1+t2;
        printf("fibonacci series :%d\n",t3);
        t1=t2;
        t2=t3;
    }
    
}
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    fibonacci(n);
    return 0;

}