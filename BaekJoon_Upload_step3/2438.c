#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);  //�� ����� ���� ���� 

	for (int i = 0; i < num; i++)  //num�� �ݺ�. �ܺ� �ݺ�(��ü �ٹٲ� ����)
	{
		for (int m = 0; m <= i; m++)  //���� �ݺ�(�� �� ��� ����)
			printf("*");
		printf("\n");
	}
	return 0;
}