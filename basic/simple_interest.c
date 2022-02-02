#include <stdio.h>
int main()
{
    int p, r, t;
    printf("Enter a prinicpel,rate and time :");
    scanf("%d%d%d", &p, &r, &t);

    float si = p * r * t / 100;
    printf("Simple interest :=%f", si);
    return 0;
}