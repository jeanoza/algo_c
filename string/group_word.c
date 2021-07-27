#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*alphabet = "abcdefghijklmnopqrstuvwxyz";
	char	*alphabet_bool;
	char	*word;
	int		len_alphabet;
	int		len_word;
	int		word_count;
	int		group_word_count;
	int		is_group_word;
	int		i;
	int		j;
	int		k;
	
	len_alphabet = strlen(alphabet);
	word = malloc(sizeof(int) * 20);
	alphabet_bool = malloc(sizeof(char) * len_alphabet);

	i = 0;
	word_count = 0;
	len_word = 0;
	group_word_count = 0;
	scanf("%d", &word_count);
	getchar();
	while (i < word_count)
	{
		is_group_word = 1;
		memset(alphabet_bool, 0, len_alphabet);
		scanf("%s", word);
		getchar();
		len_word = strlen(word);
		j = 0;
		while (j < len_word)
		{
			if (*(word + j) != *(word + (j + 1)) && alphabet_bool[*(word + (j + 1)) - 97] == 1)
				is_group_word = 0;
			alphabet_bool[*(word + j) - 97] = 1;
			++j;
		}
		if (is_group_word == 1)
			++group_word_count;
		++i;
	}
	printf("%d\n", group_word_count);
	free(alphabet_bool);
	free(word);
	return 0;
}
