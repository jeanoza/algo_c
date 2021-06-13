#include <stdio.h>

int main(void)
{
	int	i;
	int	j;
	int	num_list[10];
	int temp;
	
	/* scan number & save remainder in num_list*/
	i = 0;
	while (i < 10)
	{
		scanf("%d", &num_list[i]);
		num_list[i] %= 42;
		++i;
	}

	/* bubble sort for remainder array*/
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (num_list[j] > num_list[j + 1])
			{
				temp = num_list[j];
				num_list[j] = num_list[j + 1];
				num_list[j + 1] = temp;
			}
			++j;
		}
		++i;
	}
	
	/* compare num_list[i] and num_list[i + 1] */
	i = 0;
	temp = 1;
	while (i < 10 - 1)
	{
		if (num_list[i] != num_list[i + 1])
			++temp;
		++i;
	}

	printf("%d", temp);

	return 0;
}
