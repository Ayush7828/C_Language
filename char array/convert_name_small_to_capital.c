#include<stdio.h>
int main(){
	char name[10];
	printf("Enter a name:");
	scanf("%s",name);
	printf("\nName %s",name);

	for (int i = 0;name[i]!='\0'; i++)
	{
		/* code */
		name[i]-=32;

	}
	printf("\nName %s",name);
	return 0;
}