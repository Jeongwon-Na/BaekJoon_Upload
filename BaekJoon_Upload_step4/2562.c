#include <stdio.h>

int main(void)
{
	int arr[9];
	for (int i = 0; i < 9; i++)
		scanf("%d", &arr[i]);

	int max = arr[0];
	int k, n = 1;
	for (k = 0; k < 9; k++)
		if (arr[k] > max)
		{
			max = arr[k];
			n = k + 1;
		}

	printf("%d\n%d", max, n);
	return 0;
}