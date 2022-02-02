#include<stdio.h>
int main(){
	char name[10];
	int c=0;
	printf("Enter a name :");
	scanf("%s",name);
	printf("\n Name=%s",name);

	for (int  i = 0; name[i]!='\0'; i++)
	{
		/* code */
		if(name[i]=='a'||name[i]=='u'||name[i]=='e'||name[i]=='o'||name[i]=='i')
		{
			c=c+1;
		}
	}
	printf("\nNo of vowel : %d",c);
	return 0;

}