#include <stdio.h>

int main(void)
{
	int Hour, Min, fHour, fMin;

	scanf("%d %d", &Hour, &Min);

	if (Min >= 45)     //45�к��� ���ų� Ŭ ��
	{
		fMin = Min - 45;
		printf("%d %d", Hour, fMin);
	}
	else      //0���� ũ�� 45���� ���� �� �Է¹��� ��
	{
		fMin = 60 - (45 - Min);
		if (Hour == 0)
			fHour = 23;
		else
			fHour = Hour - 1;
		printf("%d %d", fHour, fMin);
	}
	return 0;
}