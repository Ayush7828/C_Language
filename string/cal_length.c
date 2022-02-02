#include<stdio.h>
#include<string.h>

int main(){
    char name[100];
    printf("Enter a setnence :");
    gets(name);
    printf("Length of string =%d\n",strlen(name));
    return 0;
}