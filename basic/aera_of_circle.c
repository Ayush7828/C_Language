#include <stdio.h>

int main()
{
    int pie = 3.14;
    int r;
    printf("Enter a radius =");
    scanf("%d", &r);

    float aera = pie * r * r;
    printf("Print aera of circle:%f", aera);
}