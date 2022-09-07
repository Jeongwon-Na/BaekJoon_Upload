#include <stdio.h>

int main(void)
{
	int X, N;
	scanf("%d", &X);
	scanf("%d", &N);

	int a, b, testX = 0;
	for (int k = 0; k < N; k++)
	{
		scanf("%d %d", &a, &b);
		testX += a * b;
	}

	if (X == testX)
		printf("Yes");
	else
		printf("No");
	return 0;
}