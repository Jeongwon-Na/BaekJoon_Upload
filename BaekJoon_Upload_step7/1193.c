#include <stdio.h>
//<-------분수경계값 수열의 설정------->
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
	//<-------입력한 값과 A(n)비교로 몇번째 수열값인지 추출------>
	int n = 1;
	while (X >= A(n)) n++;
	n -= 1;
	//<------분모와 분자의 합이 어떤 수여야 하는지------>
	int sum = n + 1;
	//<----순서에 맞도록 분자와 분모의 합 분할---->
	//<-----짝수번쨰 수열에 해당할 경우 분자가 1에서 시작------>
	if (n % 2 == 0)
		printf("%d/%d", sum - (n - (X - A(n))), n - (X - A(n)));
	//<------홀수번째 수열에 해당할 경우 분모가 1에서 시작------>
	else
		printf("%d/%d", n - (X - A(n)), sum - (n - (X - A(n))));
	return 0;
}