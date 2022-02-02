#include<stdio.h>
#include<math.h>

int main(){
   int temp,number,first,last,swap,rev=0;
   printf("Enter a number :");
   scanf("%d",&number);

   temp=number;
   last=number/10;
   while (number>10)
   {
       /* code */
       number=number/10;
       first=number;
       number=temp/10;

       while (number>10)
       {
           /* code */

           rev=rev*10+number%10;
           number=number/10;
       }
       swap=last;

       while (rev>10)
       {
           /* code */
           swap=swap*10+rev%10;
           rev=rev/10;

       }
       swap=swap*10+first;

       
   }
   printf("%d",swap);
}