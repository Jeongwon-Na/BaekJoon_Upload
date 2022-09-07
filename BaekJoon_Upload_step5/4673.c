#include <stdio.h>

int d(int n)
{
	int sum = n;
	//<----------일의 자리부터 포함시키고 갱신---------->
	while (n > 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int arr[10001] = { 0 };

int main(void)
{
	//<----------0부터 10000까지의 d(n)값을 저장할 배열 생성----------->
	int result = 0;
	//<-------d(n)값에 해당하는 부분의 배열값 변경-------->
	for (int k = 1; k < 9999; k++)
	{
		result = d(k);
		arr[result]++;
	}
	//<-----값이 변경되지 않고 여전히 초기화 상태인 부분 출력------>
	int m = 1;
	while (m <= 10000)
	{
		if (arr[m] == 0)
			printf("%d\n", m);
		m++;
	}
	return 0;
}