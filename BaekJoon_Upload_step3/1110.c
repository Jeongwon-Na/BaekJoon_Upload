#include <stdio.h>

int main(void)
{
	int N, newN;
	int k = 0;
	scanf("%d", &N);

	newN = N;   //�������� ���� N, ���������� ���� newN

	do
	{
		newN = (newN % 10) * 10 + (newN / 10 + newN % 10) % 10;   //N�� ������ �ʴ� �������̱� ������ �׻� ���� ���� ���Ե�
		k++;
	} while (N != newN);

	printf("%d", k);
	return 0;
}