#include <stdio.h>

int	main(void)
{
	int	count;
	scanf("%d", &count);
	int	array[count];
	int a[count];
	int b[count];
	for (int i = 0; i < count; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
		array[i] = a[i] + b[i];
	}

	for (int i = 0; i < count; i++)
	{
		printf("Case #%d: %d + %d = %d\n", i + 1, a[i], b[i], array[i]);
	}
	return (0);
}
