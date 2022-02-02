#include<stdio.h>
int main(){
    int a[5],sum=0,*p;
	printf("Enter a five values:");
	for (int  i = 0; i < 5; i++)
	{
		/* code */
		scanf("%d",&a[i]);
	}
	p=&a[0];
	for (int i = 0; i < 5; i++)
	{
		/* code */
		printf("%d",*p);
		sum+=*p;
		p++;
	}
	printf("sum :%d",sum);
	return 0;
	
}