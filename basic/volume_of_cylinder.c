#include <stdio.h>
int main()
{

    int pie = 3.14, r, h;
    printf("enter a radius and height =");
    scanf("%d%d", &r, &h);

    int volume = pie * r * r * h;
    printf("Volume of cylinder :%d", volume);
    return 0;
}