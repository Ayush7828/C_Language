#include <stdio.h>
int main()
{
    int a[5];
    int b[5];
    int c[5];

    for (int i = 0; i <= 5; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }

    for (int i = 0; i <= 5; i++)
    {
        /* code */
        scanf("%d", &b[i]);
    }

    for (int i = 0; i <= 5; i++)
    {
        /* code */
        c[i] = a[i] + b[i];
    }

    for (int i = 0; i <= 5; i++)
    {
        /* code */
        printf("%d ", a[i]);
    }

    for (int i = 0; i <= 5; i++)
    {
        /* code */
        printf("%d ", b[i]);
    }

    for (int i = 0; i <= 5; i++)
    {
        /* code */
        printf("%d ",c[i]);
    }
    return 0;
}