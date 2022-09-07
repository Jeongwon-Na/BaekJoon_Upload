#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	//<--------문자열로서 저장했으므로 저장되는 것은 아스키코드의 값-------->
	char num[N];
	scanf("%s", num);
	//<-------각각의 배열요소에 접근하여 값을 더해나가야 함--------->
	int sum = 0;
	for (int k = 0; k < N; k++)
		sum = sum + num[k] - 48;
	printf("%d", sum);
	return 0;
}