#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	//<-----5�� ����� ���, ��� �� ����----->
	if (N % 5 == 0)
	{
		printf("%d", N / 5);
		return 0;
	}
	//<-----5�� ����� �ƴ� ���, ��� �� ����------->
	else
	{
		int count = 0;
		while (1)
		{
			N -= 3;
			count++;
			//<-----5�� ��� �����ϴ� ���� ��� �� ����---->
			if (N % 5 == 0)
			{
				count += N / 5;
				break;
			}
			//<------��� 3���� ������ �������� ��, ��� �� ����------>
			if (N == 0)
				break;
			//<------����� �Ұ��� �� ����------>
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