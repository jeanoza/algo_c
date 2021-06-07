#include <stdio.h>

int	main(void)
{
	int n;
	int i;
	int j;

	scanf("%d", &n);


	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if (i + j > n - 2)
				putchar('*');
			else
				putchar(' ');
		}
		putchar('\n');
	}
	return 0;
}
