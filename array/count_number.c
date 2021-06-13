#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	char str[11];
	int temp;
	int i,j;

	scanf("%d %d %d", &a, &b, &c);

	sprintf(str, "%d", a*b*c);
	
	i = 0;
	while (i < 10)
	{
		j = 0;
		temp = 0;
		while (str[j])
		{
			if (str[j] == i + '0')
				++temp;
			++j;
		}
		printf("%d\n", temp);
		++i;
	}
	return 0;
}
