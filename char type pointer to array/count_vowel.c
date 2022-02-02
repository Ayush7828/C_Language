#include<stdio.h>
int main(){
	char name[10],*p;
	int c=0;
	printf("Enter a input name:");
	scanf("%s",name);
	for (p=&name[0];*p!=0; p++)
	{
		/* code */
		if(*p=='a'||*p=='e'||*p=='i'||*p=='u'||*p=='o'){
			c=c+1;
		}
	}
	printf("Vowel %d",c);
	return 0;
}