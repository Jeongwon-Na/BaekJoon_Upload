#include <stdio.h>

int main(void)
{
	int tCase;
	scanf("%d", &tCase);
	//<------�Է¹��� ���ڸ�ŭ ���ڸ� �Է¹ް� ������ ����Ͽ� ����ϴ� ������ �ݺ��� ����----->
	for (int k = 0; k < tCase; k++)
	{
		char arr[80];
		scanf("%s", arr);
		int m = 0, result = 0, b = 1;
		//<------�� ���� ���� ������ ���� ��� �ǽ�-------->
		while (arr[m] != '\0')
		{
			if (arr[m] == 'O')
			{
				result = result + b;
				b++;
			}
			else
				b = 1;
			m++;
		}
		//<----------���� ������ ���----------->
		printf("%d\n", result);
	}
	return 0;
}