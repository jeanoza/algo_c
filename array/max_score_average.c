#include <stdio.h>

int main(void)
{
	int		subject_num;
	double 	max;
	double	sum;

	scanf("%d", &subject_num);
	double subjects[subject_num];
	
	max = 0;
	for (int i = 0; i < subject_num; i++)
	{
		scanf("%lf", &subjects[i]);
		if (subjects[i] > max)
			max = subjects[i];
	}
	
	sum = 0;
	for (int i = 0; i < subject_num; i++)
	{
		subjects[i] = subjects[i] / max * 100;
		sum += subjects[i];
	}
	printf("%lf", sum / subject_num);

	return 0;
}
