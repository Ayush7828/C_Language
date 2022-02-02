#include<stdio.h>
int main(){

    char ch;
    printf("Enter a charcter of any A to Z :\n");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i'||ch=='A'||ch=='E'||ch=='O'||ch=='U'||ch=='I'){
        printf("This is vowel :\n");
    }
    else{
        printf("This is consonants:");
    }
    return 0;
}