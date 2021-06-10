#include <stdio.h>

int	main(void)
{
	int init_num;
	int next_num;
	int first_num;
	int second_num;
	int third_num;
	int count;
	
	scanf("%d", &init_num);
	count = 0;

	next_num = init_num;
	while (1)
	{
		if (count != 0 && next_num == init_num)
			break;
		else
		{
			if (next_num < 10)
			{
				first_num = 0;
				second_num = next_num;
			}
			else
			{
				first_num = next_num / 10;
				second_num = next_num % 10;
			}
			third_num = (first_num + second_num) % 10;
			next_num = (second_num * 10) + third_num;
			++count;
		}
	}
	printf("%d", count);

	return 0;
}
