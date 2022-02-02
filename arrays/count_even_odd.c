#include <stdio.h>
int main()
{
    int arr[10], ec = 0, oc = 0;

    for (int i = 0; i <= 10; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= 10; i++)
    {
        /* code */
        if (arr[i] % 2 == 0)
        {
            ec = ec + 1;
        }
        else
        {
            oc = oc + 1;
        }
    }
    printf("even number %d\n", ec);
    printf("odd number %d\n", oc);
    return 0;
}