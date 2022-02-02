#include<stdio.h>
int main(){



// A
// BC
// DEF
// GHIJ
    char ch='A';

    for (int  i = 1; i <=4; i++)
    {
        /* code */
        for (int  j = 1; j <=i; j++)
        {
            /* code */
            printf("%c",ch++);

        }
        printf("\n");
        
    }
    return 0;
}