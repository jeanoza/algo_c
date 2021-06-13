#include <stdio.h>

int main(void)
{
	int array_number[9];
	int i;
	int max;
	int nth_number;

	i = 0;
	while (i < 9)
	{
		scanf("%d", &array_number[i]);
		++i;
	}
	max = array_number[0];
	nth_number = 1;
	i = 0;
	while (i < 9)
	{
		if (array_number[i] > max)
		{	
			max = array_number[i];
			nth_number = i + 1;
		}
		++i;
	}

	printf("%d\n", max);
	printf("%d\n", nth_number);

	return 0;
}
