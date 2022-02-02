  #include<stdio.h>
int main(){
    int h,t,u,s;
    printf("enter a number\n");
  

    for (int  i = 101; i < 999; i++)
    {
        /* code */
        h=i/100;
        t=(i/10)%10;
        u=i%10;
        s=(h*h*h)+(t*t*t)+(u*u*u);

        if(i==s){
             printf("%d\n",i);
        }
    }
   
}