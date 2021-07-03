#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int		result[27] = {0,};
	int		i;
	int		j;
	char	input_str[100];

	scanf("%s", input_str);

	i = 0;
	while (i < strlen(alphabet))
	{
		j = 0;
		while (j < strlen(input_str))
		{
			if (input_str[j] == alphabet[i])
			{
				result[i] = j;
				break;
			}
			else
			{
				result[i] = -1;
			}
			++j;
		}
		++i;
	}
	i = 0;
	while (i < strlen(alphabet))
	{
		printf("%d ", result[i]);
		++i;
	}
	return 0;
}
