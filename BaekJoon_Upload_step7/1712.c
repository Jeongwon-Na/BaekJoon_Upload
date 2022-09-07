#include <stdio.h>

int main(void)
{
	int fCost, vCost, price, n;
	scanf("%d %d %d", &fCost, &vCost, &price);

	if (vCost >= price)
	{
		printf("-1");
		return 0;
	}
	else
	{
		n = fCost / (price - vCost) + 1;
		printf("%d", n);
		return 0;
	}
}