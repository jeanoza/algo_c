#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	reverse_number(char *nbr);
void	print_wrong_bigger(char *num1, char *num2);

int	main(void)
{
	char	*num1;
	char	*num2;

	num1 = (char*) malloc(4);
	num2 = (char*) malloc(4);

	scanf("%s %s", num1, num2);

	print_wrong_bigger(num1, num2);

	free(num1);
	free(num2);
	return (0);

}

void	print_wrong_bigger(char *num1, char *num2)
{
	int	i;
	int length;

	i = strlen(num1);

	while(i >= 0)
	{
		if (*(num1 + i) > *(num2 + i))
		{
			printf("%c%c%c\n", *(num1 + 2), *(num1 + 1), *num1);
			break;
		}
		if (*(num1 + i) < *(num2 + i))
		{
			printf("%c%c%c\n", *(num2 + 2), *(num2 + 1), *num2);
			break;
		}
		--i;
	}
}

