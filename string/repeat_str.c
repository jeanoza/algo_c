#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		test_case_num;
	int		repeat_num;
	int		i,j,k;
	int		current_index;
	char	str[21];
	
	scanf("%d", &test_case_num);
	
	k = 0;
	while(k < test_case_num)
	{
		char	result[161] = {0};

		scanf("%d %s", &repeat_num, str);
		i = 0;
		current_index = 0;
		while (i < strlen(str))
		{
			j = 0;
			while (j < repeat_num)
			{

				result[current_index] = str[i];
				++current_index;
				++j;
			}
			++i;
		}
		printf("%s\n", result);
		++k;
	}

	return 0;
}
