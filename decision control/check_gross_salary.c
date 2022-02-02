#include<stdio.h>
int main(){
    float basic,da,ta;
    scanf("%f",&basic);

    if (basic<=1000)
    {
        /* code */
        da=basic*0.5;
        ta=basic*0.1;

     }

     else if(basic<=10000){
         da=basic*0.6;
         ta=basic*0.12;
     }
     else{
         da=basic*0.9;
         ta=basic*0.3;
     }
     float gross=basic+da+ta;
     printf("gross salary is %f",gross);

     return 0;
    
}