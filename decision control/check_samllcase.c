#include<stdio.h>
int main(){
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z'){
        printf("it is uppercase");
    }
     if(ch>='a'&& ch<='z'){
        printf("it is uppercase");
    } 
    return 0;
}