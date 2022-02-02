#include <stdio.h>
int main()
{
	char name[10], rname[10], *p, *q;
	int c = 0, i;
	printf("Enter name:");
	scanf("%s",name);
	for (p=&name[0]; *p != '\0'; p++)
	{
		/* code */
		c = c + 1;
	}
	p = &name[c - 1];
	q = &rname[0];

	for (i = 0; i < c; i++)
	{
		/* code */
		*q = *p;
		p--;
		q++;
	}
	printf("%s", rname);
}