#include <stdio.h>

int main(void)
{
	int T, A, B;
	scanf("%d", &T);

	for (int num = 1; num <= T; num++)
	{
		scanf("%d %d", &A, &B);
		int sum = A + B;
		printf("Case #%d: %d\n", num, sum);
	}
	return 0;
}