#include <stdio.h>

int main(void)
{
	int num;
	int arr[42] = { 0 };  //�������� ������ 0���� 41������ �迭 ����
	for (int k = 0; k < 10; k++)
	{
		scanf("%d", &num);  //������ �˻��� num �Է¹ޱ�
		arr[num % 42]++;   //�������� �ش��ϴ� ������ �迭�� ��������.
	}
	//<-------�迭��� �ϳ��� �����ؼ� 0�� �ƴϸ� �����ϴ� ����------>
	int remain = 0;
	for (int m = 0; m < 42; m++)
	{
		if (arr[m] != 0)
			remain++;
	}
	printf("%d", remain);
	return 0;
}