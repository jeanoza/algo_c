#include <stdio.h>

int	main(void)
{
	int	a;
	int x;

	scanf("%d %d", &a, &x);
	int array[a];
	for(int i = 0; i < a; i++)
	{
		scanf("%d", &array[i]);
	}
	for(int i = 0; i < a; i++)
	{
		if (array[i] < x)
			printf("%d ", array[i]);
	}
	return (0);
}
