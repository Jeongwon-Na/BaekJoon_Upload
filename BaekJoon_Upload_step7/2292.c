#include <stdio.h>

int main(void)
{
	int num;
	int step = 1, n = 1;
	scanf("%d", &num);
	//<-------��Ģ�� ���� ���Ѽ��� �Է°��� ��------->
	do
	{
		step = step + 6 * n;
		n++;
	} while (num > step);
	//<-----���Ѽ� ������ Ƚ���� ���---->
	if (num == 1)
		printf("1");
	else
		printf("%d", n);
	return 0;
}