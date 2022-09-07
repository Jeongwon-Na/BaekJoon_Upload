#include <stdio.h>

int main(void)
{
	int num1, num2, num3, reward;

	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 == num2 && num2 == num3)
		reward = 10000 + num1 * 1000;
	else if (num1 == num2 && num2 != num3)
		reward = 1000 + num1 * 100;
	else if (num1 == num3 && num3 != num2)
		reward = 1000 + num1 * 100;
	else if (num1 != num2 && num2 == num3)
		reward = 1000 + num2 * 100;
	else
	{
		int number[3] = { num1, num2, num3 };  //최댓값 찾기 위한 배열 설정
		int max = number[0];
		for (int i = 0; i < 3; i++)
			if (number[i] > max)
				max = number[i];
		reward = max * 100;
	}

	printf("%d", reward);
	return 0;
}