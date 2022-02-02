#include <stdio.h>
int main()
{
	char name[10], sname[10], fname[20];
	int i, j, c = 0, t = 0;
	printf("Enter a  name:");
	scanf("%s", name);
	printf("Enter a  name:");
	scanf("%s", sname);
	for (i = 0; i < name[i] !'\0'; i++)
	{
		/* code */
		c = c + 1;
	}
	for (i = 0; i < sname[i] = '\0'; i++)
	{
		/* code */
		if (i < c)
		{
			fname = name[i];
		}
		if (i == c)
		{
			fname = ' ';
		}
		if (i > c)
		{
			fname = sname[i - c - 1];
		}
	}
	printf("full name %s", fname);
	return 0;
}