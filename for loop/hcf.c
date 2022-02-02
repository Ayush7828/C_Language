#include<stdio.h>
int main(){
    int a,b,hcf;
    printf("Enter a two number :");
    scanf("%d%d",&a,&b);

    for (hcf=a<b?a:b;hcf>=1; hcf--)
    {
        /* code */
        if(a%hcf==0&&b%hcf==0)
        break;
    }
    printf("Hcf :=%d",hcf);
    return 0;
    
}