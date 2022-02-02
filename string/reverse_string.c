#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("Enter a sentence:");
    gets(name);

    printf("Output\n");
    printf("revese string ",puts(strrev(name)));
    return 0;
}