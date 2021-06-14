#include <stdio.h>

int	main(void)
{
	int	num_case;
	int	num_student;
	int	more_than_average;
	int	sum;

	scanf("%d", &num_case);

	for(int i = 0; i < num_case; i++)
	{
		scanf("%d", &num_student);
		int	scores[num_student];
		sum = 0;
		more_than_average = 0;

		for(int j = 0; j < num_student; j++)
		{
			scanf("%d", &scores[j]);
			sum += scores[j];
		}
	
		for(int j = 0; j < num_student; j++)
		{
			if (scores[j] > sum / num_student)
				++more_than_average;
		}

		printf("%.3f%%\n", (double) more_than_average / num_student * 100);
	}
	return 0;
}
