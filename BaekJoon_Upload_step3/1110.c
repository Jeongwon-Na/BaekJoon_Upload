#include <stdio.h>

int main(void)
{
	int N, newN;
	int k = 0;
	scanf("%d", &N);

	newN = N;   //고정값을 쓰일 N, 변동값으로 쓰일 newN

	do
	{
		newN = (newN % 10) * 10 + (newN / 10 + newN % 10) % 10;   //N은 변하지 않는 고정값이기 때문에 항상 같은 값이 들어가게됨
		k++;
	} while (N != newN);

	printf("%d", k);
	return 0;
}