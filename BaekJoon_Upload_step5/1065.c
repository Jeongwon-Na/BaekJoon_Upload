#include <stdio.h>

int count(int input);

int main(void)
{
	int N;
	scanf("%d", &N);
	printf("%d", count(N));
	return 0;
}

int count(int input)
{
	int num = 0;

	for (int i = 1; i <= input; i++)
	{
		//<------------한 자리수와 두 자리수는 항상 반영----------->
		if (i > 0 && i < 100)
			num++;
		//<-----(백의자리-십의자리)==(십의자리-일의자리)------>
		else if (i < 1000)
			if (i / 100 - (i % 100) / 10 == (i % 100) / 10 - (i % 100) % 10)
				num++;
	}

	return num;
}