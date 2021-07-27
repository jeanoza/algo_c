#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	input_str[1000001];
	int		alphabet_count[26] = {0,};
	int		i;
	char	max_repeat_word;
	int		max_repeat;
	int		check;

	scanf("%s", input_str);
	
	i = 0;
	max_repeat = 0;
	while(input_str[i] != '\0')
	{
		if (input_str[i] > 96 && input_str[i] < 123)
			input_str[i] -= 32;
		alphabet_count[input_str[i] - 65] += 1;
		++i;
	}
	
	i = 0;
	check = 0;
	max_repeat = 0;
	max_repeat_word = '?';
	while (i < 26)
	{
		if (alphabet_count[i] > max_repeat)
		{
			max_repeat_word = i + 65;
			max_repeat = alphabet_count[i];
			check = 0;
		}
		else if (alphabet_count[i] == max_repeat)
		{
			check = 1;
		}
		++i;
	}
	if (check == 1)
		putchar('?');
	else
		putchar(max_repeat_word);

	return 0;
}
