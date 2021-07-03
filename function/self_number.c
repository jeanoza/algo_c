#include <stdio.h>

int		sum_of_digits (int n)
{
	int 	sum;
	int		m;

	sum = 0;
	while (n > 0)
	{
		m = n % 10;
		sum += m;
		n = n / 10;
	}
	return sum;
}

int		main(void)
{
	int		i;
	int		max_number;
	int		array[10000] = {0,};
	int		temp;
	
	max_number = sizeof(array) / sizeof(array[0]);
	i = 1;
	while (i <= max_number)
	{
		temp = i + sum_of_digits(i);
		if(temp <= max_number)
			array[temp] = 1;
		++i;
	}

	i = 1;
	while (i <= max_number)
	{
		if (array[i] == 0)
			printf("%d\n", i);
		++i;
	}
	return 0;
}
