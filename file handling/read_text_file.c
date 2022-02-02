#include<stdio.h>
int main(){
	int  ch;
	FILE *fp;
	fp=fopen("ayush.txt","r");
	while (1)
	{
		/* code */
		ch=getc(fp);
		if (ch=='0')
		{
			/* code */
			break;
		}
		else{
			printf("%c",ch);
		}
	}
	fclose(fp);
	printf("Data read in file");
	return 0;
	
}