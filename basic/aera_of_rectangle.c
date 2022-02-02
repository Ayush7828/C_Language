#include <stdio.h>
int main()
{
    int lenth, width;
    printf("enter a length and Breadth=");
    scanf("%d%d", &lenth, &width);

    int aera = lenth * width;
    printf("aera of rectangle is :%d", aera);
    return 0;
}