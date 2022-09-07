#include <stdio.h>

int main(void)
{
	int tCase;
	scanf("%d", &tCase);
	//<------입력받은 숫자만큼 문자를 입력받고 점수를 계산하여 출력하는 과정을 반복할 것임----->
	for (int k = 0; k < tCase; k++)
	{
		char arr[80];
		scanf("%s", arr);
		int m = 0, result = 0, b = 1;
		//<------널 문자 나올 때까지 점수 계산 실시-------->
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
		//<----------계산된 점수의 출력----------->
		printf("%d\n", result);
	}
	return 0;
}