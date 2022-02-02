#include <stdio.h>
int main()
{
	char name[10], ch;
	int c=0;
	printf("Enter a name :");
	scanf("%s", name);
	getchar();
	printf("Enter a alphabet:");
	scanf("%c", &ch);
	printf("Name:", name);
	for (int i = 0; name[i] != '\0'; i++)
	{
		/* code */
		if (name[i] == ch)
		{
			int c = c + 1;
		}
	}
	
	printf("%c and %d", ch, c);
	return 0;
}