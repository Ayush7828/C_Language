#include<stdio.h>
int main(){
	char name[20];
	int c=0;
	printf("Enter a name:\n");
	scanf("%s",name);
	printf("Name:%s\n",name);
	for (int i = 0;name[i]!='\0'; i++)
	{
		/* code */
		c=c+1;
	}
	printf("\nNo of alphabet:%d",c);
	return 0;

}