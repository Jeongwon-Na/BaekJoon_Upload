#include <stdio.h>

int arr[1000000];

int main(void)
{
	int N;
	scanf("%d", &N);

	int i = 0;
	do
	{
		scanf("%d", &arr[i]);
		i++;
	} while (i < N);

	int max = arr[0];
	int min = arr[0];
	for (int j = 0; j < N; j++)
		if (arr[j] > max)
			max = arr[j];  //�ִ��� ����
	for (int u = 0; u < N; u++)
		if (arr[u] < min)
			min = arr[u];  //�ּڰ��� ����

	printf("%d %d", min, max);
	return 0;
}