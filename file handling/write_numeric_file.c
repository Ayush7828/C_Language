#include<stdio.h>
int main(){
	int num,i;
	FILE *fp;
	fp=fopen("ayush.txt","w");
	for (i = 1; i<10; i++)
	{
		/* code */
		printf("Enter a number :\n");
		scanf("%d\n",&num);

		putw(num,fp);

	}
	fclose(fp);
	printf("\n Number are saved in file :");
	return 0;
}