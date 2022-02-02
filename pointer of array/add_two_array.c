#include <stdio.h>
int main()
{
	int a[5], b[5], c[5], *p, *q, *r;
	for (int i = 0; i < 5; i++)
	{
		/* code */

		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		/* code */

		scanf("%d", &a[i]);
	}
	p = &a[0];
	q = &b[0];
	r = &c[0];
	for (int i = 0; i < 5; i++)
	{
		/* code */
		*r = *p + *q;
		printf("%d", *r);
		p++;
		q++;
		r++;
	}
	return 0;
}