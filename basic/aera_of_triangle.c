#include<stdio.h>
int main(){
    int l,b;
    printf("Enter a length and breadth:");
    scanf("%d%d",&l,&b);
    int area=l*b;
    printf("Area of triangle %d\n",area);
    return 0;
}