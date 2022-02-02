#include <stdio.h>
int power(int a, int b);

int main()
{
    int num1, num2;
    printf("Enter a value of A and B:");
    scanf("%d%d", &num1, &num2);

    int ans = power(num1, num2);
    printf("Ans is %d", ans);
    return 0;
}
int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i < b; i++)
    {
        /* code */
        ans = ans * a;
    }
    return ans;
}