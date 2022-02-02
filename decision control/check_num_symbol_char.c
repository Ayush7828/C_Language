#include<stdio.h>
int main(){
    char ch;
    printf("enter any char\n");
    scanf("%c",&ch);

    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
        printf("this is character value \n");

    }
    else if(ch>=48&&ch<=57)
    {
        printf("this is number \n");

    }
    else{
        printf("this is symbol");
    }
    return 0;
}