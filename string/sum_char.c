#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int		num;
	int		sum;
	int		i;
	char	*arr_char;

	arr_char = (char *) malloc(sizeof(char) * 100);
	
	scanf("%d\n%s", &num, arr_char);

	sum = 0;
	i = 0;
	while(i < num)
	{
		sum += ((int)(*arr_char) - 48);
		++arr_char;
		++i;
	
	}
	arr_char -= i;
	free(arr_char);

	printf("%d\n", sum);


	return 0;
}
