#include<stdio.h>
int main(){
    
    int n,count;
    int i;
    for ( n = 1; n < 50; n++)
    {
        /* code */
        count=0;
        for (int  i = 2; i < n; i++)
        {
            /* code */
            if (n%i==0)

            {
                /* code */
                count=count+1;
            }
            
        }
        if(count==2)
        {
            printf("%d\n",i);
        }
    }
    
}