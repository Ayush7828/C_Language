 #include<stdio.h>
 int main(){
   int num,revernum=0,r;
   printf("Enter a number :");
   scanf("%d",&num);

   while (num>0)
   {
     /* code */
     r=num%10;
     revernum=revernum*10+r;
     num=num/10;


   }
   printf("Revese num is :%d",revernum);
   return 0;
   
 }