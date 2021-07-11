#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	input_str[1000000];
	int		alphabet_array[26] = {0,};
	int		i;
	char	max_repeat_word;
	int		max_repeat;

	scanf("%s", input_str);
	
	i = 0;
	while(i < strlen(input_str))
	{
		if (input_str[i] > 96 && input_str[i] < 123)
			input_str[i] -= 32;
		alphabet_array[input_str[i] - 65] += 1;
		++i;
	}

	i = 0;
	max_repeat = 0;
	while (i < sizeof(alphabet_array) / sizeof(alphabet_array[0]))
	{
		if (max_repeat != 0 && alphabet_array[i] == max_repeat)
		{
			putchar('?');
			break;
		}
		if (alphabet_array[i] > max_repeat)
		{
			max_repeat_word = i + 65;
			max_repeat = alphabet_array[i];
		}
		if (i + 1 == sizeof(alphabet_array) / sizeof(alphabet_array[0]))
			putchar(max_repeat_word);
		++i;
	}

	return 0;
}
