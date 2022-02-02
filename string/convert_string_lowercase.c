#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("enter a sentence:");
    gets(name);
    printf("convert to lowercase: %d\n",puts(strlwr(name)));
    return 0;
}