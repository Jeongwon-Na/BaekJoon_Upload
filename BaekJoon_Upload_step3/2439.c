#include <stdio.h>

int main(void)
{
	int Num;
	scanf("%d", &Num);
	//<------�ܺ� �ݺ�(��ü �ٹٲ� ����)------>
	for (int i = 1; i <= Num; i++)
	{
		//<------���� �ݺ�1 (�� �ϳ� �� ���� ���)------>
		for (int bNum = Num - i; bNum > 0; bNum--)
			printf(" ");
		//<------���� �ݺ�2 (�� �ϳ� �� �� ���)------>
		for (int k = 0; k < i; k++)
			printf("*");
		printf("\n");
	}
}