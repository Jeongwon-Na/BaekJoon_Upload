#include<stdio.h>

int main(void)
{
	int T, A, B;
	scanf("%d", &T);

	for (int num = 1; num <= T; num++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", num, A, B, A + B);
	}
	return 0;
}