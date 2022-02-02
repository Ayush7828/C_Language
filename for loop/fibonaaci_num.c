#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d", &n);

    int t1 = 0;
    int t2 = 1;
    int t3;
    for (int i = 1; i < n; i++)
    {
       t3 = t1 + t2;
        printf("%d\n", t1);

        t1 = t2;
        t2 = t3;
    }
    return 0;
}