#include <stdio.h>
int main()
{
    int lenght, width, radius;
    printf("enter a lenght and width : \n");
    scanf("%d%d", &lenght, &width);
    int aera = lenght * width;
    printf("Area of rectangle %d", aera);

    printf("\nEnter a radius :\n");
    scanf("%d", &radius);
    int area = radius * radius;
    printf("Aera of circle\n %d", area);

    return 0;
}