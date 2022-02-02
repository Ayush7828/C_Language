#include<stdio.h>
int main(){
	int num,i;
	FILE *fp;
	fp=fopen("ayush.txt","r");

	for ( i = 1; i < 10; i++)
	{
		/* code */
		num=getw(fp);
		printf("%d\n",num);
	}
	fclose(fp);
	return 0;
}