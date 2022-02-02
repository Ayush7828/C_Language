#include<stdio.h>
int main(){
	char name[10],*p;
	printf("Enter a small name :");
	scanf("%s",name);
	for(p=&name[0];*p!='\0';p++){
        *p=*p-32;
	}
	printf("capital name :%s",name);
}