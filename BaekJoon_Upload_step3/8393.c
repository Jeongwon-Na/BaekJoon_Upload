#include <stdio.h>

int main(void)
{
	int num;   //더할 수의 마지막
	int sum = 0;   //최종 출력값

	scanf("%d", &num);

	for (int i = 0; i <= num; i++)
		sum += i;

	printf("%d", sum);
	return 0;
}