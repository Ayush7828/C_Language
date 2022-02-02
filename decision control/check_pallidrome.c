#include <stdio.h>
int main()
{
    int n, h, t, u, r;
    printf("enter a number \n");
    scanf("%d", &n);
    h = n / 100;
    t = (n / 10) % 10;
    u = n % 10;
    r = u * 100 + t * 10 * h * 1;
    if (n == r)
    {
        printf("it is pallidrome\n");
    }
    if (n != r)
    {
        printf("it is not a pallidrome\n");
    }
    return 0;
}