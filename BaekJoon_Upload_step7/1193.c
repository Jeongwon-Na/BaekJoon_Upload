#include <stdio.h>
//<-------�м���谪 ������ ����------->
int A(int n)
{
	if (n == 1)
		return 1;
	else
		return A(n - 1) + (n - 1);
}

int main(void)
{
	int X;
	scanf("%d", &X);
	//<-------�Է��� ���� A(n)�񱳷� ���° ���������� ����------>
	int n = 1;
	while (X >= A(n)) n++;
	n -= 1;
	//<------�и�� ������ ���� � ������ �ϴ���------>
	int sum = n + 1;
	//<----������ �µ��� ���ڿ� �и��� �� ����---->
	//<-----¦������ ������ �ش��� ��� ���ڰ� 1���� ����------>
	if (n % 2 == 0)
		printf("%d/%d", sum - (n - (X - A(n))), n - (X - A(n)));
	//<------Ȧ����° ������ �ش��� ��� �и� 1���� ����------>
	else
		printf("%d/%d", n - (X - A(n)), sum - (n - (X - A(n))));
	return 0;
}