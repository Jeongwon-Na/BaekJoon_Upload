#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	int k, n;
	int arr[15][15] = { 0 };
	//<------0���� ����----->
	for (int a = 0; a < 15; a++)
	{
		arr[0][a] = a;
	}
	//<------�迭�� ������ ��Ģ ����------>
	for (int p = 1; p < 15; p++)
		for (int q = 1; q < 15; q++)
			arr[p][q] = arr[p - 1][q] + arr[p][q - 1];
	//<----T��ŭ ����------>
	for (int b = 0; b < T; b++)
	{
		scanf("%d\n%d", &k, &n);
		printf("%d\n", arr[k][n]);
	}
	return 0;
}