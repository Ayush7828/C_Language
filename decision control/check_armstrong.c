#include <stdio.h>
int main()
{
    int n, h, t, u, r;
    printf("enter a number \n");
    scanf("%d", &n);
    h = n % 100;
    t = (n / 10) % 10;
    u = n % 10;
    r = (h * h * h) + (t * t * t) + (u * u * u);
    if (n == r)
    {
        printf("it is armstrong");
    }
    if (n != r)
    {
        printf("it is not armstrong");
    }
}