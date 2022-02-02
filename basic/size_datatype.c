#include<stdio.h>
int main(){
    // check size of data type use in sizeof 
    // ayush pratap singh
    int a=5;
    float b=7;
    char ch='S';
    long int c=56;
    short int d=78;
    
    long double e=78;
    double f=456;


    printf(" size of int %d\n",sizeof(a));

    printf("size of flaot %d\n",sizeof(b));
    printf("size of charcter  %d\n",sizeof(ch));
    printf("size of long int %d\n",sizeof(c));
    printf("size of short int %d\n",sizeof(d));
    printf("Size of long double  is %d\n",sizeof(e));
    printf("Size of double is %d\n",sizeof(f));

    return 0;
}