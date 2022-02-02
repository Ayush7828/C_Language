#include<stdio.h>
int main(){

    int l,b;
    printf("Enter a lengtha and breadth:\n");
    scanf("%d%d",&l,&b);

    int area=l*b;
    int perimeter=2*(l+b);

    if(area>perimeter){
        printf("Area is greater  :\n%d%d",area,perimeter);
    }
    else{
        printf("Perimeter is greater :%d%d",area,perimeter);
    }
return 0;
}