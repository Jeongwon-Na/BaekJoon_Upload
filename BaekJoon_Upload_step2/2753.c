#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);

	if (year % 4 == 0)  //4�� ����� ��
	{
		if (year % 400 == 0)  //400�� ����� ��=������
			printf("1");
		else if (year % 100 != 0)  //100�� ����� �ƴ� ��=������
			printf("1");
		else  //4�� ����̰� 100�� �����=������ �ƴ�
			printf("0");
	}
	else  //4�� ����� �ƴ� ��=������ �ƴ�
		printf("0");
	return 0;
}