#include<stdio.h>
#include<math.h>
int main(){
    int p,r,t;
    printf("enter amount and rate and time :\n");
    scanf("%d%d%d",&p,&r,&t);

   float ci  = p* (pow((1 + r / 100), t));
   printf("Compound interest :%f",ci);
   return 0;
}