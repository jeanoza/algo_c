#include <stdio.h>
#include <stdlib.h>

void	get_time(int *time_ptr, char *str);
int	main(int argc, char *argv[])
{
	char	*input_str;
	int		time;
	/* todo:
	* get string
	* convert alphabet to number
	* get time to type the numbers
	**/

	/* get string */
	input_str = (char *) malloc(sizeof(char) * 16);
	scanf("%s", input_str);

	time = 0;
	/* convert alphabet & get time*/	
	get_time(&time, input_str);
	
	printf("%d\n", time);
	free(input_str);

	return 0;
}
void	get_time(int *time_ptr, char *str)
{
	while(*str)
	{
		/*
		A = 65
		Z = 90
		*/
		if (*str < 65 || *str > 90)
		{
			printf("String invalid\n");
			break;
		}
		*time_ptr += 2;
		if (*str == 'Z')
			*time_ptr += 8;
		else if (*str <= 82)
			*time_ptr += ((*str - 65) / 3) + 1;
		else
			*time_ptr += ((*str - (65 + 1)) / 3) + 1;
		++str;
	}
}
