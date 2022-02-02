#include<stdio.h>
int main(){
	char ch;
	FILE *fp;
	fp=fopen("ayush.txt","w");
	printf("Enter some text:\n");
	while (1)
	{
		/* code */
		scanf("%c",ch);
		putc(ch,fp);
		if(ch=='0'){
			break;
		}
	}
	fclose(fp);
	printf("Data is saved in file:");
	return 0;

}