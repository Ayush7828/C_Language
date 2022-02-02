#include<stdio.h>
int main(){
    int num,sum=0;
    printf("enter a number:");
    scanf("%d",&num);

      for (int  i = 1; i < num; i++)
      {
          /* code */
          if(num%i==0)
          {
              int sum=sum+i;
          }
          
      }
      if (num==sum)
      {
          /* code */
          printf("Perfect Square");
      }
      else{
          printf("Not perfect square");
      }
      
      
    return 0;
}