
#include <stdio.h>


int large(int num1, int num2);
int small(int num1, int num2);



int main() 
{
    int num1, num2, l, s;
    

    printf("Enter any two numbers\n ");
    scanf("%d%d", &num1, &num2);
    
    l = large(num1, num2);  
    s = small(num1, num2);  
    
    printf("\nMaximum = %d\n", l);
    printf("Minimum = %d", s);
    
    return 0;
}



int large(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}


int small(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}