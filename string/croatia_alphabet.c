#include <stdio.h>
#include <stdlib.h>

void	count_croatia_alpha(int *num, char *alpha);
int	main(void)
{
	char	*str;
	int		count;

	str = (char *) malloc (sizeof(char) * 101);
	scanf("%s", str);
	
	count = 0;
	count_croatia_alpha(&count, str);
	printf("%d\n", count);
	free(str);

	return 0;
}
void	count_croatia_alpha(int *num, char *alpha)
{
	while (*alpha)
	{
		if (*alpha > 96 && *alpha < 123)
			*num += 1;
		if (*alpha == '=' && *(alpha - 1) == 'z' && *(alpha - 2) == 'd')
			*num -= 1;
		if (*alpha == 'j' && (*(alpha - 1) == 'l' || *(alpha - 1) == 'n'))
			*num -= 1;
		++alpha;
	}
}
