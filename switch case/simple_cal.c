#include<stdio.h>
int main(){
    char operation;
    int a,b,result=0;

    printf("enter a two vaue ");
    scanf(" %d%c%d",&a,&operation,&b);
    

    switch (operation)
    {
    case '+':
    result=a+b;
        
        break;

      case '-':
    result=a-b;
        
        break;

         case '*':
    result=a*b;
        
        break;   
         case '/':
    result=a/b;
        
        break;
    
    default:
    printf("wrong choice ");
        break;
    }
    printf(" answer %d %d %c",a,b,operation,result);
    return 0;
    }