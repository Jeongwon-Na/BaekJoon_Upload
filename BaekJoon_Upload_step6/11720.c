#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	//<--------���ڿ��μ� ���������Ƿ� ����Ǵ� ���� �ƽ�Ű�ڵ��� ��-------->
	char num[N];
	scanf("%s", num);
	//<-------������ �迭��ҿ� �����Ͽ� ���� ���س����� ��--------->
	int sum = 0;
	for (int k = 0; k < N; k++)
		sum = sum + num[k] - 48;
	printf("%d", sum);
	return 0;
}