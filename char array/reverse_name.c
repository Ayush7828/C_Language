#include <stdio.h>
int main()
{
	char name[10];
	int c = 0;

	printf("Enter a name:");
	scanf("%s", name);
	for (int i = 0; name[i] != '\0'; i++)
	{
		/* code */
		c = c + 1;
	}

	for (int i = c - 1; i >= 0; i--)
	{
		/* code */
		printf("%c", name[i]);
	}
	return 0;
}