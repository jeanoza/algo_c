#include <stdio.h>

int main(void)
{
	int n;
	int sum;

	scanf("%d", &n);
	
	sum = 0;
	for(int i = 1; i < n + 1; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}
