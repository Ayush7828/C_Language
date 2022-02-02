#include<stdio.h>
int main(){
    int a,b,lcm;
    printf("Enter a two number:");
    scanf("%d%d",&a,&b);
for ( lcm = 1; lcm < a*b; lcm++)
{
    /* code */
    if(lcm%a==0&&lcm%b==0)
    break;
}

    printf("Lcm :=%d",lcm);

}