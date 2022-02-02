// write a program same vowel do not repeat

#include <stdio.h>
int main()
{
	char name[10];
	int c;
	int v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0;
	printf("Enter a name:");
	scanf("%s", name);

	printf("Name:%s", name);

	for (int i = 0; i < name[i] != '\0'; i++)
	{
		/* code */
		switch (name[i])
		{
		case 'a':
			v1 = 1;

			break;

		case 'e':
			v2 = 1;

			break;

		case 'i':
			v3 = 1;

			break;

		case 'o':
			v4 = 1;

			break;
		case 'u':
			v5 = 1;

			break;
		}
	}
	c = v1 + v2 + v3 + v4 + v5;
	printf("count %d", c);

	return 0;
}