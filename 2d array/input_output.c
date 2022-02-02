#include <stdio.h>
int main()
{
	int arr[3][4];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			/* code */ scanf("%d",&arr[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		/* code */
		for (int j = 0; j < 4; j++)
		{
			/* code */
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}