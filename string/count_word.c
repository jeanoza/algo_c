#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[1000000] = {0,};
	int		i;
	int		count;

	fgets(str, 1000000, stdin);
	i = 0;
	count = 0;
	while (i < strlen(str))
	{
		if (i == strlen(str) - 1 && str[i] == ' ')
			break;
		if ((str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91))
		{
			if (count == 0 || str[i - 1] == ' ')
				++count;
		}
		++i;
	}

	printf("%d\n", count);

	return 0;
}

