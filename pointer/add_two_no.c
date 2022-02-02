#include<stdio.h>
int main(){
	int a,b,c,*p,*q,*r;
	printf("Enter  a value A and B:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	r=&c;
	*r=*p+*q;
	printf("Sum :%d",*r);
	return 0;

}