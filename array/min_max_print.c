#include <stdio.h>

int main(void)
{
	int num;
	int i;
	int max;
	int min;
	int array[1000000];

	scanf("%d", &num);
	
	i = 0;
	while(i < num)
	{
		scanf("%d", &array[i]);
		++i;
	}
	
	max = array[0];
	min = array[0];
	i = 0;
	while(i < num)
	{
		if (array[i] > max)
			max = array[i];
		if (array[i] < min)
			min = array[i];
		++i;
	}

	printf("%d %d", min, max);
	
	return 0;
}
