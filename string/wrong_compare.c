#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	reverse_number(char *nbr);
void	print_bigger_str_num(char *num1, char *num2);

int	main(void)
{
	char	*num1;
	char	*num2;

	num1 = (char*) malloc(4);
	num2 = (char*) malloc(4);

	scanf("%s %s", num1, num2);

	reverse_number(num1);
	reverse_number(num2);

	print_bigger_str_num(num1, num2);

	free(num1);
	free(num2);
	return (0);

}

void	reverse_number(char *nbr)
{
	char	*temp;
	int		i;
	int		length;

	temp = (char*) malloc(4);
	i = 0;
	length = strlen(nbr);
	while(i < length)
	{
		*(temp + i) = *(nbr + length - i - 1);
		++i;
	}
	i = 0;
	while(i < length)
	{
		*(nbr + i) = *(temp + i);
		++i;
	}
	free(temp);
}

void	print_bigger_str_num(char *num1, char *num2)
{
	int	i;
	int length;

	i = 0;
	length = strlen(num1);

	while(i < length)
	{
		if (*(num1 + i) > *(num2 + i))
		{
			printf("%s\n", num1);
			break;
		}
		if (*(num1 + i) < *(num2 + i))
		{
			printf("%s\n", num2);
			break;
		}
		++i;
	}
}

