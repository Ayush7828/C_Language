#include<stdio.h>
int main(){
    char ch;
    printf("enter a any character :\n");
    scanf("%c",&ch);

    switch(ch)
    {
        case'a':
        printf("it is vowel\n");
        break;

         case'e':
        printf("it is vowel\n");
        break;

         case'i':
        printf("it is vowel\n");
        break;

         case'0':
        printf("it is vowel\n");
        break;

         case'u':
        printf("it is vowel\n");
        break;

        default:
        printf("it is consonanat\n");

    }
    return 0;
}