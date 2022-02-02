#include<stdio.h>
int main(){
    char ch;
    printf("Enter a char :");
    scanf("%c",&ch);

    if (ch>='a'&&ch<='z')
    {
        /* code */
        printf("This is lower case :");
    }

     else if (ch>='A'&&ch<='Z')
    {
        /* code */
        printf("This is upper case :");
    }
    else{
        printf("Invaild choice");
    }
    return 0;
}