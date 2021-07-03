#include <stdio.h>

int sequence_num(int num)
{
	int	i;
	int	count;
	int one;
	int ten;
	int hund;
	int mill;

	i = 1;
	count = 0;
	while (i <= num)
	{
		one = i % 10;
		ten = (i / 10) % 10;
		hund = (i / 100) % 10;
		mill = (i / 1000) % 10;

		if (mill)
		{
			if ((mill - hund == hund - ten) && (hund - ten == ten - one))
				++count;
		}
		else if (hund)
		{
			if (hund - ten == ten - one)
				++count;
		}
		else
			++count;
		++i;
	}
	return count;
}

int	main(void)
{
	int input_num;

	scanf("%d", &input_num);

	printf("%d\n", sequence_num(input_num));


	return (0);
}
