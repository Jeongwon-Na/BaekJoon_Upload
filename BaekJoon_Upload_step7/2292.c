#include <stdio.h>

int main(void)
{
	int num;
	int step = 1, n = 1;
	scanf("%d", &num);
	//<-------규칙에 따른 상한선과 입력값의 비교------->
	do
	{
		step = step + 6 * n;
		n++;
	} while (num > step);
	//<-----상한선 갱신한 횟수의 출력---->
	if (num == 1)
		printf("1");
	else
		printf("%d", n);
	return 0;
}