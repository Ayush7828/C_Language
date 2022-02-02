#include<stdio.h>
int main(){
	int a,b,c,d,e,*p[5],sum=0;
	printf("Enter a five values:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	p[0]=&a;
	p[1]=&b;
	p[2]=&c;
	p[3]=&d;
	p[4]=&e;

	for (int i = 0; i < 5; i++)
	{
		/* code */
		sum+=*p[i];
	}
	printf("sum of : %d",sum);


}