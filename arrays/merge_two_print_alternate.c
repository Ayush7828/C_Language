#include <stdio.h>
int main()
{
    int a[5];
    int b[5];
    int c[10];
    int j=0,k=0;
printf("enter first array");
    for (int i = 0; i <5; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
printf("\nenter  a second array\n");
    for (int i = 0; i <5; i++)
    {
        /* code */
        scanf("%d", &b[i]);
    }

    for (int i = 0; i <= 5; i++)
    {
        /* code */
        if(i%2==0){
        c[i] = a[j];
        j++;
        }
        else {
            c[i]=b[k];
            k++;
        } 
    }
printf("first array\n");
    for (int i = 0; i <= 5; i++)
    {
        /* code */
        printf("%d ", a[i]);
    }
printf("second array\n");
    for (int i = 0; i <= 5; i++)
    {
        /* code */
        printf("%d ", b[i]);
    }
printf("merge array\n");
    for (int i = 0; i <10; i++)
    {
        /* code */
        printf("%d ",c[i]);
    }
    return 0;
}