#include <stdio.h>

int main(void)
{
	int num, A, B;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B); //printf의 다음에는 줄바꿈이 자동으로 설정되어 있지 않음
	}
	return 0;
}