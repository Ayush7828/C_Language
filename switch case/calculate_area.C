#include <stdio.h>
int main()
{

    char ch;
    printf("Enter a press any on s,c,r:\n");
    scanf("%c", &ch);
    int r, area, square, l, b;

    switch (ch)
    {
    case 'c':

        scanf("%d", &r);
        area = r * r;
        printf("circle %d", area);
        break;

    case 's':
        printf("Enter a value of square :\n");
        scanf("%d", &square);
        area = square * square;
        printf("square of this vlaue %d", square);

    case 'r':

        printf("Enter a vlaue of length and breadth :");
        scanf("%d%d", &l, &b);
        area = l * b;
        printf("Area of rectangle %d", area);
        break;

    default:
        printf("INvaild choice");
        break;
    }
}