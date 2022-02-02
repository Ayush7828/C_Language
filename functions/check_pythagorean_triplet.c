#include<stdio.h>
bool check(int x,int y,int z)
{
    int a=max(x,max(y,z))
    int b,c;
    if(a==x)
    {
           b=y;
           c=z;
    }
    else if(a==y)
    {
        b=y;
        c=z;
    }
    else
    {
      b=x;
      c=y
    }
    if(a*a==b*b+c*c){
        return true;
    }
    else 
    {
        return false;
        
    }
    
}
int main(){
    int x,y,z;
    printf("enter a three value:");
    scanf("%d%d%d",&x,&y,&z);
    if(check(x,y,z))
    {
        printf("Pythagoreann triplet yes");
    }

    else{
        printf("not a pythagorean triplet");
    }
    return 0;
}