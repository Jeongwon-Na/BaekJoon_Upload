#include <stdio.h>
#include <string.h>

//<------��ȯ�� ���� ���常 �ϴ� reverse�Լ��� ����------>
void reverse(char arr[])
{
	int lenght = strlen(arr);
	//<-------¦/Ȧ�� ������� �� ����ؼ� Ƚ���� �����ϱ�------->
	for (int k = 0; k < lenght / 2; k++)
	{
		char word = arr[k];
		arr[k] = arr[lenght - k - 1];
		arr[lenght - k - 1] = word;
	}
}

char A[10005] = { 0 };
char B[10005] = { 0 };
char result[10010] = { 0 };

int main(void)
{
	scanf("%s %s", A, B);

	int len = 0;
	int roundUp = 0;

	reverse(A);
	reverse(B);
	//<---------���� �����ϴ� Ƚ�� �����ϱ� ���� ū �ڸ��� �ľ�-------->
	if (strlen(A) > strlen(B))
		len = strlen(A);
	else
		len = strlen(B);
	//<---------���ϱ� ���� ���� �� ���ο� �迭�� ����---------->
	for (int k = 0; k < len; k++)
	{
		//<-----���ڿ��� ���������Ƿ� ���ڷ� �ٽ� �νĽ�Ű�� ���ؼ��� �ش� �ƽ�Ű�ڵ常ŭ �� �־�� ��--->
		int sum = A[k] - '0' + B[k] - '0' + roundUp;
		//<-------�ϳ��� �ڸ����� ������ ��� NULL=0���� '0'=48�� �� �����Ƿ� ������ ������ ��------>
		if (sum < 0)
			sum += '0';
		//<------�� �ڸ����� �Ѿ�� �� ������ 1�� ���ؾ� ��------>
		if (sum > 9)
			roundUp = 1;
		//<------�� �ڸ����� �����Ǹ� �״�� ����------->
		else
			roundUp = 0;
		//<------��������� �����ؾ��� ���� �� �ڸ���.���� �ƽ�Ű�ڵ尪���μ� �����ؾ���------->
		result[k] = sum % 10 + '0';
	}
	//<-----�ڸ��� ���� �� �� �������� �ø��� �߻��� ��------>
	if (roundUp == 1)
		result[len] = '1';

	reverse(result);
	printf("%s\n", result);
	return 0;
}