#include<stdio.h>
int main(){
    for (int  i = 1; i <= 5; i++)
    {
        /* code */
        for (int j = 1; j < =5; j++)
        {
            /* code */
            if(j<=i)
            printf("%d",j);

            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
// 1   
// 12
// 123
// 1234