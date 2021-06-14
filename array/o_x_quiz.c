#include <stdio.h>
#include <string.h>

int main(void)
{
	int		num_test;
	int		current_point;
	int		sum;

	scanf("%d", &num_test);

	for(int i = 0; i < num_test; i++)
	{
		char	quiz[81] = {0,};
		scanf("%s", quiz);
		sum = 0;
		current_point = 1;
		for(int j = 0; j < strlen(quiz); j++)
		{
			if(quiz[j] == 'O')
			{
				sum += current_point;
				current_point += 1;
			}
			else
			{
				current_point = 1;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
