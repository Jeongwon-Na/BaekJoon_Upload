#include <stdio.h>

int d(int n)
{
	int sum = n;
	//<----------���� �ڸ����� ���Խ�Ű�� ����---------->
	while (n > 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int arr[10001] = { 0 };

int main(void)
{
	//<----------0���� 10000������ d(n)���� ������ �迭 ����----------->
	int result = 0;
	//<-------d(n)���� �ش��ϴ� �κ��� �迭�� ����-------->
	for (int k = 1; k < 9999; k++)
	{
		result = d(k);
		arr[result]++;
	}
	//<-----���� ������� �ʰ� ������ �ʱ�ȭ ������ �κ� ���------>
	int m = 1;
	while (m <= 10000)
	{
		if (arr[m] == 0)
			printf("%d\n", m);
		m++;
	}
	return 0;
}