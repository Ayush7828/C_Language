#include<stdio.h>
int main(){
	int a=10;
	int *ptr=&a;
	// print value
	printf("%d",*ptr);
	ptr++;
	// print address
	printf("%d",ptr);
	return 0;
	
}