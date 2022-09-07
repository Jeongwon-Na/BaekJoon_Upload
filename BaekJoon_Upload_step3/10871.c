#include <stdio.h>

int main(void)
{
	int N, X, num;
	int arr[10000];
	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}
	for (int k = 0; k < N; k++)
		if (arr[k] < X)
			printf("%d ", arr[k]);
	return 0;
}