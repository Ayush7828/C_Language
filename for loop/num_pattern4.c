// 1    
// 22   
// 333  
// 4444 
// 55555






#include<stdio.h>
int main(){
    
    for (int  i = 1; i <=5; i++)
    {
        /* code */
        for (int  j = 1; j<=5; j++)
        {
            /* code */
            if(j<=i)
            printf("%d",i);
            else
            printf(" ");

        }
        printf("\n");
    }
    return 0;
}