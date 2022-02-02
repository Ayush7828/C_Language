#include<stdio.h>
int main(){
    
    for (int  i = 1; i <=10; i++)
    {
        /* code */
        for (int j = 2; j <=10; j++)
        {
            /* code */
            int t=i*j;
            printf("%d\t",t);

        }
        printf("\n");
    }
    return 0;
}