#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	//<-----5의 배수인 경우, 출력 후 종료----->
	if (N % 5 == 0)
	{
		printf("%d", N / 5);
		return 0;
	}
	//<-----5의 배수는 아닌 경우, 출력 후 종료------->
	else
	{
		int count = 0;
		while (1)
		{
			N -= 3;
			count++;
			//<-----5의 배수 등장하는 순간 계산 후 종료---->
			if (N % 5 == 0)
			{
				count += N / 5;
				break;
			}
			//<------모두 3으로 나누어 떨어졌을 떄, 계산 후 종료------>
			if (N == 0)
				break;
			//<------계산이 불가할 때 종료------>
			if (N < 0)
			{
				printf("-1");
				return 0;
			}
		}
		printf("%d", count);
		return 0;
	}
}