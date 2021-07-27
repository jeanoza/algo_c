#include <stdio.h>

int	main(void)
{
	long	fixed_price;
	long	mutable_price;
	long	client_price;
	long	diff;
	long	count_product;

	scanf("%ld %ld %ld", &fixed_price, &mutable_price, &client_price);
	if (mutable_price >= client_price)
		printf("%d\n", -1);
	else
	{
		diff = client_price - mutable_price;
		/**
		*	when this (diff * count_product) is same with fixed_price, pure benefit become 0
		*	So, must add +1 for find a benefit point(more than 0)
		*/
		count_product = (fixed_price / diff) + 1;
		printf("%ld\n", count_product);
	}

	return 0;
}
